#include <iostream>

using namespace std;

int main()
{
    int[] arr = new int[10];
    Random rand = new Random();
    int min = int.MaxValue;
    int imin = 0;
    Console.WriteLine("—генерированный массив:");
    for (int i = 0; i < arr.Length; i++)
    {

        arr[i] = rand.Next(-10, 10);
        Console.Write("{0} ", arr[i]);
        if (min > arr[i])
        {
            min = arr[i];
            imin = i;
        }

    }

    int tmp = arr[9];
    arr[9] = arr[imin];
    arr[imin] = tmp;
    for (int i = 0; i < arr.Length; i++) {
        Console.WriteLine("{0}", arr[i])
    }
}
