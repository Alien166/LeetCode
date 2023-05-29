#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define const int Max=1e10;
struct node
{
    long long  id;
    long long salary;
    char name[70];
    char address[50];
    char que[30];
    char city[301];
    char job_title[30];
    char date[30];
    node*prev,*next;
    node*nextS;
    int New_Item;


};
class employ
{
private:
    node*head;
    char ch;
    node*top;
    node*front,*rear;
public:
    employ()
    {
        head=NULL;
        top=NULL;
    }

    // this a intro function to our project
    void intro()
    {
        cout << "\t\t****************************************************************************" << endl << endl;
        cout << "\t\t****************************************************************************" << endl;
        cout << " \t\t                   Employee  MANAGEMENT  SYSTEM                      " << endl << endl;
        cout << "\t\t                     Made By :   Adeltawab Wagieh                            " << endl << endl;
        cout << " \t\t                  UNDER SUPERVISION : Eng/Mohamed Rasmi                    " << endl << endl;
        cout << " \t\t                   Faculty of Computer Science and AI                      " << endl << endl;
        cout << "\t\t****************************************************************************" << endl;
        cout << " \t\t                              ::Main  Menu::                               " << endl;
        cout << "\t\t****************************************************************************" << endl << endl << endl;
    }

    // this a menu function

    void menu()
    {
        cout<<"\n\t\t\t<<<<< Welcome to Our Employee Management System >>>>>> . "<<endl;
        cout << "\n\t\t****************************************************************************" << endl;
        cout << " \n\t\t                              ::Menu Items::                               " << endl;
        cout<<"\n\t\t****************************************************************************" << endl;
        cout<<"\n\t\t\t\t 1-Add a Record  "<<endl;
        cout<<"\n\t\t\t\t 2-Search a Record  "<<endl;
        cout<<"\n\t\t\t\t 3-Update a Record  "<<endl;
        cout<<"\n\t\t\t\t 4-Delete a Record  "<<endl;
        cout<<"\n\t\t\t\t 5-Display a Record  "<<endl;
        cout<<"\n\t\t\t\t 6-Exit from a system  "<<endl;
        return;
    }


    // this function will insert a record at very first
    void Add_Stack()
    {
        node*NewR=new node;
        cout << "\n\t\t Enter the employee id:";
        cin>>NewR->id;
        fflush(stdin);
        cout << "\n\t\t Enter the full name of employee:";
        cin.getline(NewR->name, 50);
        fflush(stdin);
        cout << "\n\t\t Enter the qualification of employee:";
        cin.getline(NewR->que, 30);
        fflush(stdin);
        cout << "\n\t\t Enter the address:";
        cin.getline(NewR->address, 50);
        fflush(stdin);
        cout << "\n\t\t enter the city:";
        cin.getline(NewR->city, 30);
        fflush(stdin);
        cout << "\n\t\t Enter the job title:";
        cin.getline(NewR->job_title, 30);
        fflush(stdin);
        cout << "\n\t\t Enter the salary:";
        cin >> NewR->salary;
        fflush(stdin);
        cout << "\n\t\t Enter the start date:";
        cin.getline(NewR->date, 30);
        fflush(stdin);
        NewR->next = NULL;
        if (top == NULL)
        {
            // If the list is empty, the new node becomes the top
            top = NewR;
        }
        else
        {
            // If the list is not empty, the new node is added to the beginning
            NewR->next = top;
            top = NewR;
        }
        cout << "\n\t\t Employee recorded successfully!" << endl;
    }

    void add_queue() {
        node *NewR = new node;
        if (top == NULL) {
            cout << "\n \t\t system is empty:" << endl;
            cout << "\n \t \t Add a new record \n\t Press 'Y' to add record or 'N' to terminate:";
            cin >> ch;
            if (ch == 'Y' || ch == 'y') {
                Add_Stack();
                return;
            } else {
                exit(1);
            }
        } else {
            cout << "\n\t\t Enter the employee id:";
            cin >> NewR->id;
            fflush(stdin);
            cout << "\n\t\t Enter the full name of employee:";
            cin.getline(NewR->name, 50);
            fflush(stdin);
            cout << "\n\t\t Enter the qualification of employee:";
            cin.getline(NewR->que, 30);
            fflush(stdin);
            cout << "\n\t\t Enter the address:";
            cin.getline(NewR->address, 50);
            fflush(stdin);
            cout << "\n\t\t Enter the city:";
            cin.getline(NewR->city, 30);
            fflush(stdin);
            cout << "\n\t\t Enter the job title:";
            cin.getline(NewR->job_title, 30);
            fflush(stdin);
            cout << "\n\t\t Enter the salary:";
            cin >> NewR->salary;
            fflush(stdin);
            cout << "\n\t\t Enter the start date:";
            cin.getline(NewR->date, 30);
            fflush(stdin);
            NewR->next = NULL;
            if (front == NULL && rear == NULL) {
// If the queue is empty, the new node becomes both the front and the rear
                front = rear = NewR;
            } else {
// If the queue is not empty, the new node is added to the rear
                rear->next = NewR;
                NewR->prev = rear;
                rear = NewR;
            }
        }
    }


    // this function to insert record in the very of last .
    void Add_last()
    {
        if (top == NULL)
        {
            cout << "\n \t\t system is empty:" << endl;
            cout << "\n \t \t Add a new record \n\t Press 'Y' to add record or 'N' to terminate:";
            cin>>ch;
            if(ch=='Y' || ch=='y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            node*temp=top;
            while (temp->next != NULL)
            {
                temp=temp->next;
            }
            node*NewR=new node;
            cout<<" \n\t\t Enter The Employee Id. ";
            cin>>NewR->id;
            fflush(stdin);
            cout<<" \n\t\t Enter The Full Name of Employee . ";
            cin.getline(NewR->name,50);
            fflush(stdin);
            cout<<" \n\t\t Enter The qualification of Employee . ";
            cin.getline(NewR->que,50);
            fflush(stdin);
            cout<<" \n\t\t Enter The Address of Employee . ";
            cin.getline(NewR->address,50);
            fflush(stdin);
            cout<<" \n\t\t Enter The City of Employee . ";
            cin.getline(NewR->city,50);
            fflush(stdin);
            cout<<" \n\t\t Enter The Job title . ";
            cin.getline(NewR->job_title,50);
            fflush(stdin);
            cout<<" \n\t\t Enter The Salary . ";
            cin>>NewR->salary;
            fflush(stdin);
            cout<<" \n\t\t Enter The Start Date  of Employee . ";
            cin.getline(NewR->date,30);
            fflush(stdin);

            NewR->next=NULL;
            temp->next=NewR;
            NewR->prev=temp;

        }
        cout << "\n\t\t Employee recorded successfully!" << endl;
    }


    // this function based on id to add after that
    void Add_After()
    {
        if(top == NULL)
        {
            cout << "\n \t\t system is empty:" << endl;
            cout << "\n \t \t Add a new record \n\t Press 'Y' to add record or 'N' to terminate:";
            cin>>ch;
            if(ch=='y' || ch=='Y'){
                Add_Stack();
                return;
            }
            else{
                exit(1);
            }
        }
        else
        {
            int val;
            cout << "\n\t\t Enter the id after which you want to add a new record:";
            cin>>val;
            bool flag= false;
            node*temp=top;
            node*p;
            while (temp !=NULL) {
                if (temp->id == val) {
                    node*NewR = new node;
                    cout << " \n\t\t Enter The Employee Id. ";
                    cin >> NewR->id;
                    fflush(stdin);
                    cout << " \n\t\t Enter The Full Name Of Employee. ";
                    cin.getline(NewR->name, 50);
                    fflush(stdin);
                    cout << " \n\t\t Enter The qualification of Employee. ";
                    cin.getline(NewR->que, 50);
                    fflush(stdin);
                    cout << " \n\t\t Enter The Address of Employee. ";
                    cin.getline(NewR->address, 50);
                    fflush(stdin);
                    cout << " \n\t\t Enter The City of Employee. ";
                    cin.getline(NewR->city, 50);
                    fflush(stdin);
                    cout << " \n\t\t Enter The Job Title . ";
                    cin.getline(NewR->job_title, 50);
                    fflush(stdin);
                    cout << " \n\t\t Enter The Salary . ";
                    cin >> NewR->salary;
                    fflush(stdin);
                    cout << " \n\t\t Enter The Start Date . ";
                    cin.getline(NewR->date, 30);
                    fflush(stdin);

                    if (temp->next != NULL) {
                        NewR->next = temp->next;
                        NewR->prev = temp;
                        p = temp->next;
                        p->prev = NewR;
                        temp->next = NewR;
                    }
                    else // this will add after the id in head
                    {
                        NewR->next = temp->next;
                        NewR->prev = temp;
                        temp->next = NewR;
                    }
                    flag = true;
                }
                temp = temp->next;
            }
            if(flag==false){
                cout << "\n\t\t id not found" << endl;
            }
        }
        cout << "\n\t\t Employee recorded successfully!" << endl;
    }

    // this function will add before id u wanted to added
    void Add_Before()
    {
        if(top== NULL)
        {
            cout << "\n\t\t List is empty:" << endl;
            cout << "\n\t\t Add a new record\n\t Press Y or N:";
            cin >> ch;
            if (ch == 'Y' || ch == 'y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            int val;
            cout << "\n\t\t Enter the id before which you want to add a new record:" << endl;
            cin>>val;
            bool flag=false;
            node*temp=top;
            if(temp->id==val) {
                Add_Stack();
                return;
            }
            else {
                while (temp != NULL)
                {
                    if(temp->id==val)
                    {
                        node*NewR=new node;
                        fflush(stdin);
                        cout << "\n\t\t Enter the employee id:";
                        cin >> NewR->id;
                        fflush(stdin);
                        cout << "\n\t\t Enter the full name of employee:";
                        cin.getline(NewR->name, 50);
                        fflush(stdin);
                        cout << "\n\t\t enter the qualification of employee:";
                        cin.getline(NewR->que, 50);
                        fflush(stdin);
                        cout << "\n\t\t Enter the address:";
                        cin.getline(NewR->address, 50);
                        fflush(stdin);
                        cout << "\n\t\t Enter the city:";
                        cin.getline(NewR->city, 50);
                        fflush(stdin);
                        cout << "\n\t\t Enter the job title:";
                        cin.getline(NewR->job_title, 50);
                        fflush(stdin);
                        cout << "\n\t\t Enter the salary:";
                        cin >> NewR->salary;
                        fflush(stdin);
                        cout << "\n\t\t Enter the start date:";
                        cin.getline(NewR->date, 30);
                        fflush(stdin);

                        NewR->next=temp;
                        NewR->prev=temp;
                        node*p;
                        p=temp->prev;
                        p->next=NewR;
                        temp->prev=NewR;
                        flag = true;
                    }
                    temp=temp->next;
                }
                if(flag == false) {
                    cout << "\n\t\t id not found" << endl;
                }
            }
        }
        cout << "\n\t\t Employee recorded successfully!" << endl;
    }

    // this function determine to deleted a data for employee
    void del()
    {
        if(top== NULL)
        {
            cout << "\n\t\t List is empty:" << endl;
            cout << "\n\t\t Add a new record\n\t Press Y or N:";
            cin >> ch;
            if (ch == 'Y' || ch == 'y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            int val;
            cout << "\n\t\t Enter the employee id which do you want to delete a record:";
            cin>>val;
            node*temp=top;
            bool flag= false;
            if(temp->id==val)
            {
                top=temp->next;
                top->prev=NULL;
                delete temp;
                flag= true;
                if(flag== true) {
                    cout << "Record has been deleted successfully" << endl;
                }
            }
            else
            {
                while (temp !=NULL)
                {
                    if(temp->id==val)
                    {
                        node*p,*q;
                        if(temp->next==NULL)
                        {
                            p=temp->prev;
                            p->next=NULL;
                            delete temp;
                            flag= true;
                        }

                        else
                        {
                            p=temp->prev;
                            q=temp->next;
                            p->next=q;
                            q->next=p;
                            delete temp;
                            flag=true;
                        }
                    }
                    temp=temp->next;
                }
                if (flag == false)
                {
                    cout << "\n\t Value is not found:" << endl;
                }
            }
        }
    }


    void show()
    {
        if(top ==NULL)
        {
            cout << "\n\t\t List is empty:" << endl;
            cout << "\n\t\t Add a new record\n\t Press Y or N:";
            cin>>ch;
            if(ch=='Y' || ch=='y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            node*temp=top;
            while (temp!=NULL)
            {
                cout << "\n\t\t ******************************************************" << endl;
                cout << "\n\t\t Information of employee:" << endl;
                cout << "\n\t\t ID:" << "\t\t\t" << temp->id << endl;
                cout << "\n\t\t name:" << "\t\t\t" << temp->name << endl;
                cout << "\n\t\t Qualification:" << "\t\t" << temp->que << endl;
                cout << "\n\t\t Address:" << "\t\t" << temp->address << endl;
                cout << "\n\t\t city:" << "\t\t\t" << temp->city << endl;
                cout << "\n\t\t job title:""\t\t" << temp->job_title << endl;
                cout << "\n\t\t salary:" << "\t\t" << temp->salary << endl;
                cout << "\n\t\t starting date:" << "\t\t" << temp->date << endl;
                cout << "\t\t      ***********************************************************" << endl;
                temp = temp->next;
            }
        }
    }

    // this function designed to search an specific employee.
    void search()
    {
        if(top == NULL)
        {
            cout << "\n\t\t List is empty:" << endl;
            cout << "\n\t\t Add a new record\n\t Press Y or N:";
            cin>>ch;
            if(ch=='Y' || ch=='y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            int val;
            cout << "\n\t\t Enter employee id which you want to search:";
            cin>>val;
            node*temp=top;
            bool flag=false;
            while (temp != NULL)
            {
                if(temp->id==val)
                {
                    cout << "\n\t\t ********************************************" << endl;
                    cout << "\n\t\t Information of employee:" << endl;
                    cout << "\n\t\t ID:" << "\t\t\t" << temp->id << endl;
                    cout << "\n\t\t name:" << "\t\t\t" << temp->name << endl;
                    cout << "\n\t\t Qualification:" << "\t\t" << temp->que << endl;
                    cout << "\n\t\t Address:" << "\t\t" << temp->address << endl;
                    cout << "\n\t\t city:" << "\t\t\t" << temp->city << endl;
                    cout << "\n\t\t job title:""\t\t" << temp->job_title << endl;
                    cout << "\n\t\t salary:" << "\t\t" << temp->salary << endl;
                    cout << "\n\t\t starting date:" << "\t\t" << temp->date << endl;
                    cout << "_______________________________________________________" << endl;
                    return;
                }
                temp =temp->next;
            }
        }
    }


    /// this function to updated data for employees
    void update()
    {
        if(top == NULL)
        {
            cout << "\n\t\t List is empty" << endl;
            cout << "\n\t\t Add a new record \n\t Press Y to proceed or N to exit:" << endl;
            cin>>ch;
            if(ch=='Y' || ch=='y') {
                Add_Stack();
                return;
            }
            else {
                exit(1);
            }
        }
        else
        {
            node*NewR=new node;
            node*temp=top;
            int val;
            cout << "\n\t\t enter the emplyee id whose record you want to update:";
            cin>>val;
            while (temp !=NULL)
            {
                if(temp->id==val)
                {
                    cout << "\n\t\t Enter the employee id:";
                    cin >> NewR->id;
                    fflush(stdin);
                    cout << "\n\t\t Enter the full name of employee:";
                    cin.getline(NewR->name, 50);
                    fflush(stdin);
                    cout << "\n\t\t enter the qualification of employee:";
                    cin.getline(NewR->que, 50);
                    fflush(stdin);
                    cout << "\n\t\t Enter the address:";
                    cin.getline(NewR->address, 50);
                    fflush(stdin);
                    cout << "\n\t\t Enter the city:";
                    cin.getline(NewR->city, 50);
                    fflush(stdin);
                    cout << "\n\t\t Enter the job title:";
                    cin.getline(NewR->job_title, 50);
                    fflush(stdin);
                    cout << "\n\t\t Enter the salary:";
                    cin >> NewR->salary;
                    fflush(stdin);
                    cout << "\n\t\t Enter the start date:";
                    cin.getline(NewR->date, 30);
                    fflush(stdin);
                }
                temp=temp->next;
            }
            cout << "Record has been updated successfully" << endl;
        }
    }
};
int main()
{
    int n;
    char ch;
    employ em;
    em.intro();
    label2:
    em.menu();
    cout << "\n\t\t\t Enter your choice:";
    cin>>n;
    if(n==1)
    {
        label1:
        cout << "\t\t_______________________________________" << endl;
        cout << "\n\t\t Where you want to add record? " << endl;
        cout << "\t\t\t" << endl;
        cout << "\n\t\t 1- insert at very first place " << endl;
        cout << "\n\t\t 2- insert at very last place " << endl;
        cout << "\n\t\t 3- insert after recently added record(pointer pointing at this) " << endl;
        cout << "\n\t\t 4- insert before record " << endl;
        cout << "\n\t\t Enter Choice? " << endl;
        cin>>n;
        if(n==1)
        {
            em.Add_Stack();
            cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit " << endl;
            cin>>ch;
            if(ch=='Y' || ch== 'y') {
                goto label2;
            }
            else {
                exit(1);
            }
        }
        else if(n==2)
        {
            em.Add_last();
            cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
            cin>>ch;
            if(ch == 'Y'|| ch=='y') {
                goto label2;
            }
            else {
                exit(1);
            }
        }
        else if(n==3) {
            em.Add_After();
            cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
            cin>>ch;
            if(ch == 'Y'|| ch=='y') {
                goto label2;
            }
            else {
                exit(1);
            }
        }
        else if(n==4) {
            em.Add_Before();
            cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
            cin>>ch;
            if(ch=='Y' || ch=='y') {
                goto label2;
            }
            else {
                exit(1);
            }
        }
        else {
            cout << "\n\t\t Choose Correct Answer:" << endl;
            goto label1;
        }
    }
    else if(n==2)
    {
        em.search();
        cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
        cin>>ch;
        if(ch == 'Y' ||ch=='y')
        {
            goto label2;
        }
        else
        {
            exit(1);
        }
    }
    else if(n==3)
    {
        em.update();
        cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
        cin>>ch;
        if(ch == 'Y' ||ch=='y')
        {
            goto label2;
        }
        else
        {
            exit(1);
        }
    }
    else if(n==4)
    {
        em.del();
        cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
        cin>>ch;
        if(ch == 'Y' ||ch=='y')
        {
            goto label2;
        }
        else
        {
            exit(1);
        }
    }
    else if(n==5)
    {
        em.show();
        cout << "\n\t\t do you want to go to main menu? press 'y' to continue or 'N' to exit" << endl;
        cin>>ch;
        if(ch == 'Y' ||ch=='y')
        {
            goto label2;
        }
        else
        {
            exit(1);
        }
    }
    else if(n==6)
    {
        exit(1);
    }
    else
    {
        cout << "\n\t\t Choose correct answer" << endl;
        goto label2;
    }
    system("pause");
}
