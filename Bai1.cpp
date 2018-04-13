#include <iostream>
#include <fstream>

using namespace std;

#define OUTPUT_FILE "EXX1_OUT.TXT"
#define INPUT_FILE "EXX1_IN.TXT"

int bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Day da sap xep: \n";
    for (int i=n-1; i>=0; i--)
    {
        cout << arr[i] << "  " ;
    }
}
int main()
{
    int n=0, i=0;
    int arr[100000];

    ifstream infile;
   	infile.open(INPUT_FILE);

   	while(!infile.eof())
    {
   		infile >> arr[n];
   		n++;
   	}
   	infile.close();



    ofstream outfile;
   	outfile.open(OUTPUT_FILE);
   	outfile << "Day sau khi sap xep: " << endl;
    bubblesort(arr, n);
	for(i = n-1; i >= 0; i--)
	{
		outfile << arr[i] << " ";
	}

	//Done file
	outfile.close();

	return 0;
}


    /*int n;
    int arr[100];
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    cout << "Nhap vao " << n << " phan tu: " << endl;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    ofstream outfile;
   	outfile.open(OUTPUT_FILE);
    bubblesort(arr, n);
	for(i = n-1; i >= 0; i--)
	{
		outfile << arr[i] << endl;
	}

	//Done file
	outfile.close();

	return 0;
    return 0;
}
*/

