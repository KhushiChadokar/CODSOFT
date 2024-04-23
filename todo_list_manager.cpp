//A console based ToDoList manager 
#include <iostream>
#include <cstring>
using namespace std;

const int maxTasks= 10;
const int maxNameLength= 50;

class ToDoList {
private:
    char tasks[maxTasks][maxNameLength];
    bool completed[maxTasks];
    int taskCount;

public:
    ToDoList() : taskCount(1){}

    void addTask() {                                            //ADDS_TASKS
        if (taskCount < maxTasks) {
            cout << "Enter task name: ";
            cin >> tasks[taskCount];
            completed[taskCount] = false;
            taskCount++;
            cout << "Task added successfully!"<<endl;
        } 
        else {
            cout << "To-do list is full!"<<endl;
        }
    }

    void completeTask() {                                       //MARKS AS_COMPLETED
        int taskIndex;
        cout << "Enter the index of the task you want to mark as completed: ";
        cin >> taskIndex;
        if (taskIndex >= 0 && taskIndex < taskCount) {
            completed[taskIndex] = true;
            cout << "Task marked as completed!"<<endl;
        } 
        else {
            cout << "Invalid task index!"<<endl;
        }
    }

    void viewList() {                                         //DISPLAYS_TASKS
        cout << "Tasks List: ";
        for (int i = 1; i < taskCount; ++i) {
            cout << i << ".";
            if (completed[i])
                cout << "[*] ";
            else
                cout << "[ ] ";
            cout << tasks[i]<<"\t" ;
        }
        cout<<endl;
    }

    void deleteTask() {                                          //DELETE_TASKS
        int taskIndex;
        cout << "Enter the index of the task you want to delete: ";
        cin >> taskIndex;
        if (taskIndex >= 0 || taskIndex < taskCount) {
            for (int i = taskIndex; i < taskCount - 1; ++i) {
                strcpy(tasks[i], tasks[i + 1]);
                completed[i] = completed[i + 1];
            }
            taskCount--;
            cout << "Task deleted successfully!"<<endl;
        } 
        else {
            cout << "Invalid task index!"<<endl;
        }
    }
};

int main() {
    ToDoList todoList;
    char choice;
    cout<<"HEY!! WELCOME TO YOUR DAILY TASKS MANAGER"<<endl;
    cout<<"What tasks do you want to accomplish today?"<<endl;
    while (true) {
        cout<<"\nA. Add Task"<<endl;
        cout<<"B. Mark task as completed"<<endl;
        cout<<"C. View To-Do List"<<endl;
        cout<<"D. Delete Task"<<endl;
        cout<<"E. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 'A':
                todoList.addTask();
                break;
            case 'B':
                todoList.completeTask();
                break;
            case 'C':
                todoList.viewList();
                break;
            case 'D':
                todoList.deleteTask();
                break;
            case 'E':
                cout << "Exit...\n";
                return 0;
            default:
                cout << "Invalid choice! Kindly please try again.\n";
        }
    }

    return 0;
}

