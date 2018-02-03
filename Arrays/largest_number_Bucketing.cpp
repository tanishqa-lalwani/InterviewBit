// https://www.interviewbit.com/problems/largest-number/

string sort(vector <int> A);
int comp(string a, string b)
{
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A)
{
    int allZero = 1;
    vector<string> B;
    for(int i=0;i<A.size();i++)
    {
        B.push_back(to_string(A[i]));
        if(A[i]!=0)
            allZero = 0;
    }
    if(allZero)
        return "0";
    sort(B.begin(), B.end(), comp);
    string ans = "";
    for(int i=0;i<B.size();i++)
        ans += B[i];
    return ans;
}
