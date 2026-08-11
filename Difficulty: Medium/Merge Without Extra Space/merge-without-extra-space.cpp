class Solution {
	public:
	void mergeArrays(vector<int>& a, vector<int>& b) {
		int n = a.size();
		int m = b.size();
		
		int total = n + m ;
		int gap = (total + 1)/2;
		
		while (gap > 0) {
			int i = 0;
			int j = gap;
			
			while (j < total) {
				
				// First Case ---> dono element a me hi hai
				
				if (i < n && j < n) {
					if (a[i] > a[j]) {
						swap(a[i], a[j]);
					}
					
				}
				
				/* Second Case ---> one element a me and another
				element b me ho */
				
				else if (i < n && j >= n) {
					if (a[i] > b[j - n]) {
						swap(a[i], b[j - n]);
					}
				}
				
				// third Case ---> dono element b me hi hai
				
				else {
					if (b[i - n] > b[j - n]) {
						swap(b[i - n], b[j - n]);
					}
					
				}
				i++;
				j++;
				
			}
		
    		if (gap == 1) {
    			gap = 0;
    		}
    		else {
    			gap = (gap + 1)/2;
    		}
		}
		
	}
};
