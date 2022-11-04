#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct Node{

            char name[20];
            int age;
            int no_of_match_played;
            float run_rate;
            int highest_score;
            int lowest_score;
            struct Node *next;
    }node;

node *temp=NULL;
node *head=NULL;


void design()
{
    system("color B");
    printf("\n\n\n\t\t\t\t<<<<<<Welcome To The Sorting Technique project>>>>>>\n\n\n");
    printf("\tThis project is done by:\n\n");
    printf("\t\t\t\tNurunnahar Akter Nira\n\t\t\t\tid:191-15-12066\n\n");
    printf("\t\t\t\tNaimul huda Walid\n\t\t\t\tid:191-15-12090\n\n");
    printf("\t\t\t\tPritom Saha\n\t\t\t\tid:191-15-12306\n\n");
    printf("\t\t\t\tKazi Masum Billah\n\t\t\t\tid:191-15-12549\n\n");
}

void creatnode(int i)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("\n\n\t\tEnter name of player %d :  ",i+1);
    fflush(stdin);
    gets(newnode->name);

    printf("\n\t\tEnter age of player %d :  ",i+1);
    fflush(stdin);
    scanf("%d",&newnode->age);

    printf("\n\t\tEnter no of matched played by player %d :  ",i+1);
    fflush(stdin);
    scanf("%d",&newnode->no_of_match_played);

    printf("\n\t\tEnter Run rate of player %d :  ",i+1);
    fflush(stdin);
    scanf("%f",&newnode->run_rate);

    printf("\n\t\tEnter highest score of player %d :  ",i+1);
    fflush(stdin);
    scanf("%d",&newnode->highest_score);

    printf("\n\t\tEnter lowest score of player %d :  ",i+1);
    fflush(stdin);
    scanf("%d",&newnode->lowest_score);


    newnode->next=NULL;

    if(head==NULL)
    {
        head= newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL){

        temp=temp->next;
    }
        temp->next=newnode;
    }

}



void namesortA()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(strcmp(i->name,j->name)>0)
        {
            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void namesortD()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(strcmp(i->name,j->name)<0)
        {
            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void agesortA()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->age >j->age)
        {
            t1=i->age;
            i->age=j->age;
            j->age=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void agesortD()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->age <j->age)
        {
            t1=i->age;
            i->age=j->age;
            j->age=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void no_of_match_played_A()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->no_of_match_played >j->no_of_match_played)
        {
            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void no_of_match_played_D()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->no_of_match_played <j->no_of_match_played)
        {
            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void runrateA()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->run_rate >j->run_rate)
        {
            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;
        }
    }
 }
}

void runrateD()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->run_rate <j->run_rate)
        {
            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;
        }
    }
 }
}

void highest_scoreA()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->highest_score > j->highest_score)
        {
            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void highest_scoreD()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->highest_score < j->highest_score)
        {
            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void lowest_scoreA()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->lowest_score > j->lowest_score)
        {
            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}

void lowest_scoreD()
{
    node *i,*j;
    char sr[20];
    i=head;
    int t1;
    float t2;

for(i=head;i->next!=NULL;i=i->next)
 {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->lowest_score < j->lowest_score)
        {
            t1=i->lowest_score;
            i->lowest_score=j->lowest_score;
            j->lowest_score=t1;

            strcpy(sr,i->name);
            strcpy(i->name,j->name);
            strcpy(j->name,sr);

            t1=i->age;
            i->age=j->age;
            j->age=t1;

            t1=i->no_of_match_played;
            i->no_of_match_played=j->no_of_match_played;
            j->no_of_match_played=t1;

            t1=i->highest_score;
            i->highest_score=j->highest_score;
            j->highest_score=t1;

            t2=i->run_rate;
            i->run_rate=j->run_rate;
            j->run_rate=t2;
        }
    }
 }
}



void display()
{
    temp=head;
    while(temp!=NULL)
    {

    printf("\n\n\t|\tName:%s  |\tAge:%d  |\tno.of matched:%d  |\tRun rate:%.2f  |\tHighest score:%d  |\tLowest score:%d  |",
           temp->name,temp->age,temp->no_of_match_played,temp->run_rate,temp->highest_score,temp->lowest_score);


    temp=temp->next;
    }
}


void Option()
{

    printf("\n\n\n\n\t\t<<<<<Options>>>>>\n\n\n");
        printf("\t1.Players's name in Ascending Order.\n\n\t2.Players's name in Descending Order.\n\n");
        printf("\t3.Players's Age in Ascending Order.\n\n\t4.Players's Age in Descending Order.\n\n");
        printf("\t5.Number of Match Played in Ascending Order.\n\n\t6.Number of Match Played in Descending Order.\n\n");
        printf("\t7.Player's Run Rate in Ascending Order.\n\n\t8.Player's Run Rate in Descending Order.\n\n");
        printf("\t9.Player's Highest Score in Ascending Order.\n\n\t10.Player's Highest Score in Descending Order.\n\n");
        printf("\t11.Player's Lowest Score in Ascending Order.\n\n\t12.Player's Lowest Score in Descending Order.\n\n");


}
int main()
{
    int i,n,c,o;
    design();

    printf("\n\n\n Do you want to Start the Project?\n\n");
    printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
    fflush(stdin);
    scanf("%c",&c);
    system("cls");
    if(c=='y'||c=='Y')
  {

    printf("\n\t\tHow many  player's info you want to insert?  ");
    fflush(stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\n");
        creatnode(i);
    }
    system("cls");
    printf("your list is:\n");
    display();

  again:

    system("cls");
    printf("\tyour list is:\n");
    display();
    Option();
     printf("\n\tEnter your option:");
    scanf("%d",&o);


 switch(o)
    {
    case 1:
        printf("\n\n\n\t\tPlayers's name in Ascending Order....");
        namesortA();
        display();
        printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 2:
        printf("\n\n\n\t\tPlayers's name in Descending Order....");
        namesortD();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 3:
        printf("\n\n\n\t\tPlayers's Age in Ascending Order....");
        agesortA();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 4:
        printf("\n\n\n\t\tPlayers's Age in Descending Order....");
        agesortD();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 5:
        printf("\n\n\n\t\tNumber of Match Played in Ascending Order....");
        no_of_match_played_A();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 6:
        printf("\n\n\n\t\tNumber of Match Played in Descending Order....");
        no_of_match_played_D();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 7:
        printf("\n\n\n\t\tPlayer's Run Rate in Ascending Order....");
        runrateA();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 8:
        printf("\n\n\n\t\tPlayer's Run Rate in Descending Order....");
        runrateD();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 9:
        printf("\n\n\n\t\tPlayer's Highest Score in Ascending Order....");
        highest_scoreA();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 10:
        printf("\n\n\n\t\tPlayer's Highest Score in Descending Order....");
        highest_scoreD();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 11:
        printf("\n\n\n\t\tPlayer's Lowest Score in Ascending Order....");
        lowest_scoreA();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    case 12:
        printf("\n\n\n\t\tPlayer's Lowest Score in Descending Order....");
        lowest_scoreD();
        display();
         printf("\n\ndo u want to search any other option?");
        printf("\nIF 'YES' Press 'y' If 'NO' Press 'any key' :");
        fflush(stdin);
        scanf("%c",&c);
        if(c=='y'||c=='Y') goto again;
        break;
    default:
        printf("wrong input.\n");
        goto again;
    }

  }

return 0;
}
