int main()
{
    int p,c;
    int sticks=21;
    while(sticks!=1)
    {
        printf("Enter the no of matchsticks(1or2or3or4) that you want to pick\n ");
        scanf("%d",&p);
        c=5-p;
        sticks=sticks-5;
        printf("The computer chose %d\n%d sticks left\n",c,sticks);
        

    }
    if(sticks==1)
     printf("Yuu have to pick the last stick .You lost ");
}