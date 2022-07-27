#include <bits/stdc++.h>
using namespace std;

class Book
{
    char title[25], author[20], publisher[20];
    int price, stockp;

public:
    void insert()
    {
        cout << "Enter the title" << endl;
        cin >> title;
        cout << "Enter the author" << endl;
        cin >> author;
        cout << "Enter the price" << endl;
        cin >> price;
        cout << "Enter the publisher" << endl;
        cin >> publisher;
        cout << "Enter the stock" << endl;
        cin >> stockp;
    }
    Book()
    {
        strcpy(title, " ");
        strcpy(author, " ");
        strcpy(publisher, " ");
        price = 0;
        stockp = 0;
    }
    int books(char titl[20], char auth[20])
    {
        int f = 0;
        if (strcmp(auth, author) == 0)
        {
            f = 1;
        }
        return (f);
    }
    void search()
    {
        display();
        stock();
    }
    void display()
    {
        cout << "BOOK DETAILS\n";
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl;
        cout << "publisher: " << publisher << endl;
    }
    void stock()
    {
        int nc;
        cout << "\nEnter the number of copies required" << endl;
        cin >> nc;
        if (nc > stockp)
        {
            cout << "required number of copie not available" << endl;
        }
        else
        {
            cout << "Total Price" << price * nc << endl;
            stockp = stockp - nc;
        }
    }
    ~Book()
    {
    }
};

int main()
{
    int i, n, ch, f;
    char title[20], author[20];
    Book b[10];
    while (1)
    {
        cout << "1.Insert" << endl;
        cout << "2.Search" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the number of books to be inserted" << endl;
            cin >> n;
            for (i = 0; i < n; i++)
            {
                b[i].insert();
            }

            break;
        case 2:
            cout << "Enter the title of book" << endl;
            cin >> title;

            cout << "Enter the author" << endl;
            cin >> author;

            f = 0;

            for (i = 0; i < n; i++)
            {
                f = b[i].books(title, author);
                if (f == 1)
                {
                    break;
                }
            }
            if (f == 1)
            {
                b[i].search();
            }
            else
            {
                cout << "Book not available" << endl;
            }

            break;
        case 3:
            return 0;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }

    return 0;
}
