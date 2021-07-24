#include<iostream>

using namespace std;

class ArrayCalculator {
public:
    static int sumOfArray(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n ;  i++) {
            sum += arr[i];
        }
        return sum;
    }
    static double sumOfArray(double arr[], int n) {
        double sum = 0;
        for (int i = 0; i < n ;  i++) {
            sum += arr[i];
        }
        return sum;
    }   
    static int maxOfArray(int arr[], int n) {
        int max = arr[0];
        for (int i = 0; i < n ;  i++) {
            max = max > arr[i] ? max : arr[i];
        }
        return max;
    }
    static double maxOfArray(double arr[], int n) {
        double max = arr[0];
        for (int i = 0; i < n ;  i++) {
            max = max > arr[i] ? max : arr[i];
        }
        return max;
    }
    
    static int minOfArray(int arr[], int n) {
        int max = arr[0];
        for (int i = 0; i < n ;  i++) {
            max = max < arr[i] ? max : arr[i];
        }
        return max;
    }
    static double minOfArray(double arr[], int n) {
        double max = arr[0];
        for (int i = 0; i < n ;  i++) {
            max = max < arr[i] ? max : arr[i];
        }
        return max;
    }
};