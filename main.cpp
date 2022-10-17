#include <string>
#include <list>
#include <vector>
#include <iostream>
#include <utility>
using std::list;
using std::vector;
using std::cout;
using std::cin;
using std::stoi;
using std::string;
using std::to_string;
using std::pair;

struct Initiate {
    int id = 0;
};
struct nPair {
	string key;
	string value;
}
;
struct Vector {
    vector <nPair> vec;
};


class Hash{
    public:

        void AddPair(string id)
        {
            Vector vec;
            vec.vec;
            Hash hash;
            std::string inputKey;
            std::string inputvalue;

            inputKey = id;
            cout << "Please insert value for id: " << id << " \n";
            std::cin >> inputvalue;
            nPair pair;
            pair.key = string(inputKey);
            pair.value = inputvalue;
            vec.vec.emplace_back(pair);
        }
        void RemovePair(string id) 
        {
            Vector vec;
            Hash hash;
            string removeId;
            string removeVal;
            vec.vec.erase(vec.vec.begin() + stoi(id));
        }
        void Display() 
        {
            Vector vec;
            cout << "Vector contains pairs: ";
            for (int i = 0; i < vec.vec.size(); i++)
            {
                cout << "(" << vec.vec[i].first << "," << vec.vec[i].second << ")" << " ";
            }
        }
}; 


int main()
{
    Initiate init;
    string Nid = to_string(init.id);
    Hash hash;
    while (true) {
        cout << "Insert operation to perform with correct keyword in parenthesis's. \n",
            "Add pair (add), Remove pair (del), Remove all (kill) Search with value (sval), Search with id (sid): ",
            "If your wish is to view contents of vector, type (display)";
        string operation;
        cin >> operation;
        if (operation == "add") {
            hash.AddPair(Nid);
        }
        else if (operation == "del") {
            cout << "Which element do you wish to remove? (insert number id): ";
            string numberId;
            cin >> numberId;
            //hash.RemovePair(stoi(numberId));
        }
        /*
        else if (operation == "kill") {
            //hash.Kill();
        }
        else if (operation == "sval") {
            cout << "Search (hash value): ";
            string hvalue;
            cin >> hvalue;
            //hash.SearchVal(hvalue);
        }
        else if (operation == "sid") {
            cout << "Search (hash id): ";
            string hid;
            cin >> hid;
            //hash.SearchId(stoi(hid));
        }
        */
        else if (operation == "display") {
            hash.Display();
            //hash.AddPair(Nid);

        }
    }
}