#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
int start = 0, end = v.size() - 1;
while(start <= end)
{
swap(v[start],v[end]);
start++;
end--;
}
return v;
}
void print(vector<int> v)
{
    for(int i;i<v.size(); i++)
    {
    cout<<v[i]<<"";
    }
    cout<<endl;
}

int main()
{
vector<int> v;
v.push_back(4);
v.push_back(41);
v.push_back(3);
v.push_back(14);
v.push_back(32);
vector<int> ans = reverse(v);
cout<<"printing array"<<ans<<endl;

return 0;

}