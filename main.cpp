#include <iostream>
using namespace std;



class PCB{
private:
    int processID;
    string processName;
    string processStatus;
    int commandCounter;
    int* cpuRegisters;
public:
    //конструктор
    PCB(
    int processID_ = 0,
    string processName_ = "Undefined",
    string processStatus_ = "Stopped",
    int commandCounter_ = 0,
    int* cpuRegisters_ = nullptr
    ) : processID(processID_), 
    processName(processName_), 
    processStatus(processStatus_), 
    commandCounter(commandCounter_), 
    cpuRegisters(cpuRegisters_) {}
    //деструктор
    ~PCB(){
        delete[] cpuRegisters;
    }
    //методы
    int getProcessID() const {return processID;}
    //нарисовать процесс
    void print() const {
        cout << "Process ID: " << processID
             << ", Name: " << processName
             << ", Status: " << processStatus
             << ", Command Counter: " << commandCounter << endl;
    }
};

class ListNode{
private:
    PCB data;
    ListNode* next;
public:
    ListNode(
        int processID_ = 0,
        string processName_ = "Undefined",
        string processStatus_ = "Stopped",
        int commandCounter_ = 0,
        int* cpuRegisters_ = nullptr,
        ListNode* next_ = nullptr
    ) : data(processID_, processName_, processStatus_, commandCounter_, cpuRegisters_), next(next_) {}
    ~ListNode(){
        delete next;
    }
    
};

class ProcessList{
private:
    ListNode* head;
public:
    ProcessList(ListNode* head_ = nullptr) : head(head_) {}
    ~ProcessList(){
        delete head;
    }
    bool insert(const PCB& newPCB){

    }
    bool remove(int pid){

    }
    void printList(){

    }
};


int main(){

}