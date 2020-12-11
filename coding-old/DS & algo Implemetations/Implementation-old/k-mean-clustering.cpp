/*
	K-mean clustering for 1-D dataset with k=2
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
	float dataset[9] = {2, 4, 10, 12, 3, 20, 30, 11, 25};
	vector<float> cluster1;
	vector<float> cluster2;

	//initial centroids
	float centroid1=dataset[0];
	float centroid2=dataset[1];

	float temp1=0, temp2=0;
	float old_c_1, old_c_2;

	while(true){
		temp1=temp2=0;
		old_c_1 = centroid1;
		old_c_2 = centroid2;
		//diving dataset into clusters
		for(int i=0; i<9; i++){

			if(abs(dataset[i] - centroid1) > abs(dataset[i] - centroid2)){
				//cout<<"Pushing dataset[" << i << "] = " << dataset[i] <<" to cluster1.\n";
				cluster1.push_back(dataset[i]);
			}else{
				//cout<<"Pushing dataset[" << i << "] = " << dataset[i] <<" to cluster2.\n";
				cluster2.push_back(dataset[i]);
			}

		}

		//temp-code
		//printing the clusters
		cout << "\nCluster 1: \n";
		for(auto i=cluster1.begin(); i != cluster1.end(); ++i){
			cout << *i << " ";
		}
		cout << "\nCluster 2: \n";
		for(auto i=cluster2.begin(); i != cluster2.end(); ++i){
			cout << *i << " ";
		}
		cout << "\n";


		//finding average of each cluster
		for(auto i=cluster1.begin(); i!= cluster1.end(); ++i){
			temp1 += *i;
		}
		for(auto i=cluster2.begin(); i!= cluster2.end(); ++i){
			temp2 += *i;
		}

		temp1 = temp1/cluster1.size();
		temp2 = temp2/cluster2.size();
		centroid1 = temp1;
		centroid2 = temp2;

		// //temp-code
		// //printing new cluster centroids
		// cout << "New Cluster centroids: " << temp1 << " " << temp2 << endl;


		//checking the end of algorithm
		//if((abs(centroid1-temp1) < 0.1) && (abs(centroid2-temp2) < 0.1)){
		//if(centroid1 == temp2 || centroid2 == temp1){
		if(abs((old_c_2-centroid1) < 0.1) && (abs(old_c_1 - centroid2) < 0.1)){
			centroid1 = temp1;
			centroid2 = temp2;
			cout << "\n\nCluster centroids are: " << centroid1 << " " << centroid2 << endl;
			break;
		}else{
			centroid1 = temp1;
			centroid2 = temp2;
			cluster1.clear();
			cluster2.clear();
		}
	}

	//temp-code
	//printing the clusters
	cout << "\n\n\n\nCluster 1: \n";
	for(auto i=cluster1.begin(); i != cluster1.end(); ++i){
		cout << *i << " ";
	}
	cout << "\nCluster 2: \n";
	for(auto i=cluster2.begin(); i != cluster2.end(); ++i){
		cout << *i << " ";
	}
	cout << "\n";

}
