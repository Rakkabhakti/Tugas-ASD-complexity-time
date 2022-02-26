#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

// A sample function whose time taken to
// be measured
int main()
{
    int maksimum, jumlah, k = 0, lokasi,z;
      jumlah =100000;
       cout<<"jumlah elemen adalah "<<jumlah<<endl;
 for(z=0;z<15;z++){
  
  int array[jumlah];
  for (k = 0; k < jumlah; k ++) {
     array[k]=k+1;}
  
  
	/* The function gettimeofday() can get the time as
	well as timezone.
	int gettimeofday(struct timeval *tv, struct timezone *tz);
	The tv argument is a struct timeval and gives the
	number of seconds and micro seconds since the Epoch.
	struct timeval {
			time_t	 tv_sec;	 // seconds
			suseconds_t tv_usec; // microseconds
		}; */
	struct timeval start, end;

	// start timer.
	gettimeofday(&start, NULL);

	// unsync the I/O of C and C++.
	ios_base::sync_with_stdio(false);
	maksimum = array[0];
  for(k = 0; k < jumlah; k++) {
    if (array[k] > maksimum)  {
      maksimum = array[k];
      lokasi = k+1;
    }}
  cout <<endl <<"Nilai maksimum adalah " << maksimum << " berada di elemen ke " << lokasi << endl;
	// stop timer.
	gettimeofday(&end, NULL);

	// Calculating total time taken by the program.
	double time_taken;

	time_taken = (end.tv_sec - start.tv_sec) * 1e6;
	time_taken = (time_taken + (end.tv_usec -
							start.tv_usec)) * 1e-6;

	cout << "Time taken by program is : " << fixed
		<< time_taken << setprecision(6);
	cout << " sec" << endl;}
//	jumlah=jumlah*10;}
	return 0;
}
