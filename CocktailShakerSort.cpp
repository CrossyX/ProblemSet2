#include "CocktailShakerSort.h"

using namespace std;

void CocktailShakerSort::operator()(IntVector& aContainer) const 
{
	// Pseudocode
	// 	   
	// beginIndex = 0
	//endIndex = n - 1

	// while beginIndex < endIndex
	// do
		// for i = beginIndex to endIndex - 1
		// do
			// if a[i] > a[i+1]
				// a[j] :=: a[j+1]
			// end
		// end

		// endIndex = endIndex - 1
	
		// for i = endIndex down to beginIndex + 1
		// do
			// if a[i] < a[i-1]
				// a[i] :=: a[i-1]
			// end
		// end

		// beginIndex = beginIndex + 1
	// end
}

