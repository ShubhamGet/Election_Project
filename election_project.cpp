#include<iostream>
using namespace std;
#include<string.h>

#define CANDIDATE1 "Sanjay Singh"
#define CANDIDATE2 "Arvind Singh"
#define CANDIDATE3 "Dhrup Singh"
#define CANDIDATE4 "Panala Singh"

int voteCount1=0, voteCount2=0, voteCount3=0, voteCount4=0, spoiledtvotes=0;

void castVote()
{
    int choice;
    cout<<"\n\n\t\t\t###### Please choose own candidate #####"<<endl;
    cout<<1.<<CANDIDATE1<<endl;
    cout<<2.<<CANDIDATE2<<endl;
    cout<<3.<<CANDIDATE3<<endl;
    cout<<4.<<CANDIDATE4<<endl;

    cout<<"\n Input your choice (1 - 4):";
    cin>>choice;
    switch(choice)
    {
        case 1: voteCount1++; break;
        case 2: voteCount2++; break;
        case 3: voteCount3++; break;
        case 4: voteCount4++; break;
        case 5: spoiledtvotes; break;
        default: cout<<"\n Error: wrong choice !! please retry:";
    }
    cout<<"\n Thanks for vote:"<<endl;
}
void votesCount()
{
    cout<<"\n ##### voting statics #####"<<endl;
    cout<<CANDIDATE1<<voteCount1<<endl;
    cout<<CANDIDATE2<<voteCount2<<endl;
    cout<<CANDIDATE3<<voteCount3<<endl;
    cout<<CANDIDATE4<<voteCount4<<endl;
    cout<<spoiledtvotes<<spoiledtvotes<<endl;
}

void getLeadingCandidate()
{
    cout<<"\n ##### Leading Candidate #####";
    if(voteCount1>voteCount2 && voteCount1>voteCount3 && voteCount1>voteCount4)
    cout<<CANDIDATE1;
    else if(voteCount2>voteCount3 && voteCount2>voteCount4 && voteCount2>voteCount1)
    cout<<CANDIDATE2;
    else if(voteCount3>voteCount4 && voteCount3>voteCount2 && voteCount3>voteCount1)
    cout<<CANDIDATE3;
    else if(voteCount4>voteCount1 && voteCount4>voteCount2 && voteCount4>voteCount3)
    cout<<CANDIDATE4;
    else
    cout<<"------- warning !!! No-win situation ------- :"<<endl;

}
int main()
{
    int i;
    int choice;

    do
    {
        cout<<"\n ##### welcome to Election/voting 2021 #####\n:";
        cout<<"\n 1.cast the vote:: "<<endl;
        cout<<"\n 2.Found vote count:: "<<endl;
        cout<<"\n 3.Finding leading candidate:: "<<endl;
        cout<<"\n 0.Exit "<<endl;

        cout<<" please enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: castVote();break;
            case 2: votesCount();break;
            case 3: getLeadingCandidate();break;
            default: cout<<"\n Error: Invalid choice:";
        }
    }
    while(choice!=0);
    return 0;
}
