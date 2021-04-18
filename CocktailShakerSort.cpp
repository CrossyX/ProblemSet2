#include "CocktailShakerSort.h"
#include "IntVector.h"

using namespace std;

void CocktailShakerSort::operator()(IntVector& aContainer) const 
{
	int beginIndex = 0;
	int endIndex = aContainer.size() - 1;

	while (beginIndex < endIndex)
	{
		for (int i = beginIndex; i < endIndex; i++)
		{
			int a = aContainer[i];
			int b = aContainer[i + 1];

			if (aContainer[i] > aContainer[i + 1])
			{
				aContainer.swap(i, i + 1);
			}
		}

		endIndex -= 1;

		for (int i = endIndex; i > beginIndex; i--)
		{
			int a = aContainer[i];
			int b = aContainer[i - 1];

			if (aContainer[i] < aContainer[i - 1])
			{
				aContainer.swap(i, i - 1);
			}
		}

		beginIndex += 1;
	}
}