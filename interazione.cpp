#include <String>
int getInt(String stringa){
    return getDouble(stringa);
}
void scambiaInt(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

double getDouble(String stringa){
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

bool getBoolean(String stringa){
    return getInt(stringa) != 0;
}
void scambiaBoolean(bool &a, bool &b){
    bool c = a;
    a = b;
    b = c;
}

String getString(String stringa){
    std::cout<<stringa<<endl;
    cin.getline(stringa);
    return stringa;
}
void scambiaStringString(String &a, String &b){
    String c = a;
    a = b;
    b = c;
}