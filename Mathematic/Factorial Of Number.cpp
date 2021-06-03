long long factorial(int N) {
    long long int s=1;int i;
    for(i=2;i<=N;i++)
    {
        s=s*i;
    }
    return s;
}
