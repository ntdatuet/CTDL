
#include <iostream>
#include <fstream>

using namespace std;

#define OUTPUT_FILE "EXX2_OUT.TXT"
#define INPUT_FILE "EXX1_IN.TXT"

void insertionSort(int arr[], int length)
{
    int i, j, tmp;
    for (i = 0; i < length; i++)
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                j--;
        }
    }
    cout << "Day sau khi sap xep: " << endl;
    for (int i=0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int length=0, i;
    int arr[100000];

    ifstream infile;
   	infile.open(INPUT_FILE);

   	while(!infile.eof())
    {
   		infile >> arr[length];
   		length++;
   	}
   	infile.close();



    ofstream outfile;
   	outfile.open(OUTPUT_FILE);
   	outfile << "Day sau khi sap xep: " << endl;
    insertionSort(arr, length);
	for ( i=0; i < length; i++)
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

