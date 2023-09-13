// Jones wants to design a program that manages tasks and to-do lists. He wants to implement
// classes for Task and ToDoList with attributes like task description, due date, and completion
// status. Use arrays of objects to store task and to-do list information. Help him perform operations
// such as adding tasks, marking the status of the task, and displaying incomplete tasks.
// Note: This kind of question helps in clearing Capgemini tests.
// Input format:
// The first line of input should contain an integer n, representing the number of tasks to be added.
// For n items, the input consists of the description, due date, and an integer, N (0/1) in separate lines.
// Output format :
// The output displays all task descriptions that are not marked as completed.
// Code constraints:
// 0 < Maximum number of tasks <= 10
// 0 <= N <= 1
// 1 < Length of description < 100
// 1< Length of the due date < 20

// You are using GCC
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class List{
    public:
    string name;
    string date;
    int val;
    
    List(string name,string date, int val){
        this->name = name;
        this->date = date;
        this->val = val;
    }
};

class ToDo{
    public:
    vector<List> lists;
    
    void addTask(List list){
        lists.push_back(list);
    }
    
    void incomplete(){
        for(auto &task : lists){
            if(task.val==0){
                cout << task.name << endl;
            }
        }
    }
};

int main(){
    int a;
    ToDo test;
    cin >>a;
    while(a--){
        string name;
        string date;
        int val;
        cin.ignore();
        getline(cin,name);
        cin >> date >> val;
        test.addTask(List(name,date,val));
    }
    
    test.incomplete();
}