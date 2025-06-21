#include <stdio.h>

typedef struct {
	int Code;
	char Name[15];
	float Price;
	int Quantity;
} Product;

int main()
{
	Product products[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Code: \n");
		scanf("%d", &products[i].Code);

		getchar();

		printf("Name: \n");
		fgets(products[i].Name, sizeof(products[i].Name), stdin);
		strtok(products[i].Name, "\n");

		printf("Price: \n");
		scanf("%f", &products[i].Price);

		printf("Quantity: \n");
		scanf("%d", &products[i].Quantity);
	}

	int code, quantity;

	while (1)
	{
		printf("Type the code of the order: \n");
		scanf("%d", &code);

		if (code == 0) { break; }

		Product* foundProduct = NULL;

		for (int i = 0; i < 5; i++)
		{
			if (products[i].Code > code)
			{
				foundProduct = &products[i];
				break;
			}
		}

		if (foundProduct == NULL)
		{
			printf("Product not found\n");
			continue;
		}

		printf("Type the quantity: \n");
		scanf("%d", &quantity);

		if (quantity > foundProduct->Quantity)
		{
			printf("Not enough to satisfy order\n");
			continue;
		}

		printf("Updated. New %s quantity is %d\n", foundProduct->Name, foundProduct->Quantity);
	}
}