
int func(int x);
int main()
{
    int x,y;
    x=2;
    y=func(x);
    printf("%d",y);
    return 0;
}
int func(int x)
{
    return x+1;
}