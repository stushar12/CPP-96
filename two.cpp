vector<int> abc(Node *root, vector<int> &v)
{
    if(root==NULL)
    return v;
    else
    {
        abc(root->left,v);
        v.push_back(root->data);
        abc(root->right,v);
    }
    return v;
}
bool isIdentical(Node *r1, Node *r2)
{
    vector<int> v1,v2;
    v1=abc(r1,v1);
    v2=abc(r2,v2);
    if(v1.size()!=v2.size())
    return false;
    int i=0;
    while(i<v1.size())
    {
        if(v1[i]!=v2[i])
        return false;
        i++;
    }
    return true;
}
