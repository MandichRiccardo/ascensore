using namespace std;
double getDouble(string stringa){
    std::cout<<stringa<<endl;
    double ritorno;
    cin>>ritorno;
    return ritorno;
}
void scambiaDouble(double &a, double &b){
    double c = a;
    a = b;
    b = c;
}

int getIntero(string stringa){
    return getDouble(stringa);
}
void scambiaIntero(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

bool getBoolean(string stringa){
    return getIntero(stringa) != 0;
}
void scambiaBoolean(bool &a, bool &b){
    bool c = a;
    a = b;
    b = c;
}

string getString(string stringa){
    std::cout<<stringa<<endl;
    cin>>stringa;
    return stringa;
}
void scambiaString(string &a, string &b){
    string c = a;
    a = b;
    b = c;
}