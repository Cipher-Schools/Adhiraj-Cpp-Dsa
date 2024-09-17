// void merge(vector < int > & arr, int s, int mid, int e){
//     vector<int> temp;

//     int i = s;
//     int j = mid + 1;

//     //merge two sorted halves
//     while(i <= mid && j <= e){
//         if(arr[i] < arr[j]){
//             temp.push_back(arr[i++]);
//             // i++;
//         }
//         else{
//             temp.push_back(arr[j++]);
//             // j++;
//         }


//     }

//     while(i <= mid){
//         temp.push_back(arr[i++]);
//     }

//     while(j <= e){
//         temp.push_back(arr[j++]);
//     }
//     for(int k = s; k <= e; k++){
//         arr[k] = temp[k - s];
//     }


// }

// void mergSortMethod(vector < int > & arr, int s, int e){
//     if(s >= e) return;

//     int mid = (s+e)/2;

//     //Recursively sort the the left and right halves
//     mergSortMethod(arr, s, mid);
//     mergSortMethod(arr, mid+1, e);

//     merge(arr, s, mid, e);
// }

// void mergeSort(vector < int > & arr, int n) {
//     mergSortMethod(arr, 0, n-1);
// }