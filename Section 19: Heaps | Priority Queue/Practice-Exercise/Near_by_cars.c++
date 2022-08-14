//Code given by Prateek Bhaiya:
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

class Car{

    public:
         string id;
         int x , y;
         Car(string id , int x , int y){
             this->id=id;
             this->x=x;
             this->y=y;
         }
         //Distance:
         int dist() const{
             return x*x + y*y; //Square of the distance:
         }
};

class CarCompare{
    public:
    bool operator()(const Car A , const Car B){
        return A.dist() < B.dist();
    }
};

void printNearestCar(vector<Car> cars , int k)
{
    //create a max heapof size k:
    priority_queue<Car , vector<Car> , CarCompare> max_heap(cars.begin() , cars.begin() +k);

    //Remaining cars
    for(int i=k;i<cars.size();i++)
    {
        auto car = cars[i];

        if(car.dist() < max_heap.top().dist()){
            max_heap.pop();// Remove the node caontaining largest
            max_heap.push(car);
        }
    }

        //Store answer in a vector
        vector<Car> output;
        while(!max_heap.empty()){
            output.push_back(max_heap.top());
            max_heap.pop();
        }

        //Reverse the vector:
        reverse(output.begin() , output.end());

        //Print the vector
        for(auto x : output)
        {
            cout<<x.id<<endl;
        }
        return;
}

//Main Function:
int main(int argc, char const *argv[])
{
    int N ,k;
    cin>>N>>k;
    string id;
    int x , y;
   vector<Car> vctr;
    for(int i=0;i<N;i++)
    {
        cin>>id>>x>>y;
        vctr.push_back(Car(id, x, y ));
    }

    printNearestCar(vctr, k);
    return 0;
}
