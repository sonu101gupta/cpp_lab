#include <iostream>
#include <fstream>
using namespace std;
struct bank
{
    string name;
    double bal;
    long acc;
};
int main()
{
    int n;
    cout << "Enter no. of entries: ";
    cin >> n;
    struct bank arr[n];
    ofstream outfile("F:\\bank.txt");
    if (!outfile)
    {
        cout << "Cannot open file\n";
        return 1;
    }
    outfile << "Name  |  Account Number  |  Balance\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter name of customer " << i + 1 << ": ";
        cin >> arr[i].name;
        cout << "Enter a/c number of customer " << i + 1 << ": ";
        cin >> arr[i].acc;
        cout << "Enter balance of customer " << i + 1 << ": ";
        cin >> arr[i].bal;
        outfile << arr[i].name << "  |  " << arr[i].acc << "  |  " << arr[i].bal << "\n";
    }
    outfile.close();
    ifstream infile("F:\\bank.txt");
    if (!infile)
    {
        cout << "File doesn't exist\n";
        return 1;
    }
    string header;
    getline(infile, header); // Skip the header line
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of customer " << i + 1 << endl;
        getline(infile, arr[i].name,'|');
        infile >> arr[i].acc;
        infile.ignore(); // Ignore the comma
        infile >> arr[i].bal;
        infile.ignore(); // Ignore the newline character
        cout << "Name: " << arr[i].name << "\n";
        cout << "A/c number: " << arr[i].acc << "\n";
        cout << "Balance (in INR): " << arr[i].bal << "\n";
    }
    infile.close();
    return 0;
}

// #include <iostream>
// #include <fstream>
// using namespace std;
// struct bank
// {
//     char name[20];
//     double bal;
//     long acc;
// };
// int main()
// {
//     int n, i;
//     cout << "Enter no. of entries : ";
//     cin >> n;
//     struct bank arr[n];
//     ofstream outfile("F:\\bank.txt");
//     if (!outfile)
//     {
//         cout << "Cannot outfileen file \n";
//         return 1;
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << "\nEnter name of customer " << i + 1 << ": ";
//         cin >>arr[i].name;
//         cout << "Enter a/c number of customer " << i + 1 << ": ";
//         cin >> arr[i].acc ;
//         cout << "Enter balamce of customer " << i + 1 << ": ";
//         cin >>arr[i].bal;
//         outfile.write((char *)&arr[i], sizeof(struct bank));
//     }
//     outfile.close();
    
//     ifstream infile("F:\\bank.txt");
//     if (!infile)
//     {
//         cout << "File doesn't exists \n";
//         return 1;
//     }
//     for (i = 0; i < n; i++)
//     {
//         if (infile)
//         {   
//             cout<<"\nDetails of customer "<<i+1;
//             infile.read((char *)&arr[i], sizeof(struct bank));
//             cout << "Name : " << arr[i].name << "\n";
//             cout << "A/c number  : " << arr[i].acc << "\n";
//             cout << "Balance (in INR) : " << arr[i].bal << "\n";
//         }
//     }

//     infile.close();
//     return 0;
// }
