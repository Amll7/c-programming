#include<stdio.h>
int main()
{
    int i,j,qncount=10,k=0;
    char qs[100];
    char userans[10];
    char answer;
    float mark=0;
    int incorrect=0;
    int correct=0;
    float percentage=0;
    FILE *ques=fopen("question.txt","r");
    FILE *ans=fopen("answer.txt","r");
    for(i=0;i<qncount;i++)
    {
      for(j=0;j<6;j++)
      {
       fgets(qs,sizeof(qs),ques);
       printf("%s",qs);
      }
      printf("Enter the answer: ");
      scanf(" %c",&userans[k++]);
      
    }
    for(i=0;i<k;i++)
    {
      fscanf(ans, " %c", &answer);
      if(userans[i]==answer)
      {
        mark=mark+2;
        correct++;
      }
      else
      {
        incorrect++;
      }
    }
    
    percentage=(mark/(qncount*2))*100;
    printf("Mark: %g\n",mark);
    printf("percentage: %g\n",percentage);
    printf("Correct answers: %d\n",correct);
    printf("Incorrect answers: %d\n",incorrect);
    rewind(ans);
    for(i=0;i<k;i++)
    {
      
      fscanf(ans, " %c", &answer);
      if(userans[i]!=answer)
      {
        printf("correct answer of question %d is %c.\n",i+1,answer);
      }
      
    }
}