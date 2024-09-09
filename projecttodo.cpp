#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout<<"Tasks TO-DO: "<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0; i<task_count; i++)
    {
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------"<<endl;
}

int main()
{
    string tasks[10]={""};
    //counter variable-> to help me know how many tasks we have
    int task_count = 0;

    int option = -1;
    while(option !=0)
    {
        // I will make menu here
        cout<<"-----TO-DO LIST-----"<<endl;
        cout<<"1 - To add new task "<<endl;
        cout<<"2 - To view tasks "<<endl;
        cout<<"3 - Delete the tasks"<<endl;
        cout<<"0 - Exit"<<endl;
        cin>>option;

        switch(option)
        {
            case 1:
            {
                system("cls");
                if(task_count>9)
                {
                    cout<<"'''TASK LIST IS FULL'''"<<endl;
                }
                else{
                    cout<<"Enter a new Task: ";
                    cin.ignore();
                    getline(cin, tasks[task_count]);
                    task_count++;
                }
                break;
            }
            case 2:
                system("cls");
                print_tasks(tasks, task_count);
                break;
            case 3:
            {
                system("cls");
                int del_task = 0;
                cout<<"Enter the task to delete: "<<endl;
                cin>>del_task;
                if(del_task<0 || del_task>9)
                {
                    cout<<"You Entered Invalid Task No."<<endl;
                }
                for(int i= del_task ; i<task_count ; i++)
                {
                    tasks[i]=tasks[i+1];
                }
                task_count = task_count-1;
                break;
            }
            case 0:
                cout<<"Terminating --------------"<<endl;
                break;
            
            default:
                cout<<"You entered Inavlid Value!"<<endl;
        }
    }
    return 0;
}
