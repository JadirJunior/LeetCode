#include <iostream>
#include <algorithm>

using namespace std;


class MyHashMap {
public:
    int tam;
    int data[1000001];

    MyHashMap() {

        fill(data, data+1000001, -1);

    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }

};


int main()
{


    int key = 10, value = 20;
    
    MyHashMap* obj = new MyHashMap();
    obj->put(key,value);
    int param_2 = obj->get(key);
    obj->remove(key);

    return 0;
}