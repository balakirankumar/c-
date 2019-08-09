#include <iostream>

using namespace std;
class movie{
    private:
     string rating;
    public:
    string title;
    string director;
    movie(string atitle , string adirector , string arating){
        title=atitle;
        director=adirector;
        rating=arating;
    }
        void setrating(string arating){
            if(rating == "1" || rating == "2" || rating == "3" || rating == "4" || rating == "5"){
                rating = arating;
            }
            else
            rating ="NR";
        }
            string getrating(){
            return(rating);
        }
};

int main()
{
    movie Bahubali("Bahubali" , "Rajamouli" , "5");
    cout<<" Hello "<<endl;
    cout<<Bahubali.title<<endl;
    cout<<Bahubali.getrating();

    return 0;
}