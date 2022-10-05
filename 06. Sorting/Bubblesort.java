import java.io.*;
import java.util.*;
class BubbleSort{
    
    static void bubbleSort(int arr[], int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i - 1; j++){
                if( arr[j] > arr[j + 1]){
                    
                    // swapping
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    
                }
            }
        }
    }
    
    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter size of array");
        n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        
        bubbleSort(a, n);
        
        for(int i = 0; i < n; i++){
            System.out.print(a[i] + " ");
        }
    }
}
