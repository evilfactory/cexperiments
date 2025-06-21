#include <stdio.h>

typedef struct {
	int Code;
	int AmountOutFlights;
	int AmountInFlights;
} AirPort;

typedef struct {
	int From;
	int To;
} Flight;

AirPort* find_airport(AirPort airports[], int count, int code)
{
	for (int i = 0; i < count; i++)
	{
		if (airports[i].Code == code)
		{
			return &airports[i];
		}
	}

	return NULL;
}

int main()
{
	AirPort airPorts[5];
	Flight flights[5];

	for (int i = 0; i < 5; i++)
	{
		AirPort newAirPort;
		
		printf("Type Air Port Code: ");
		scanf("%d", &newAirPort.Code);

		if (newAirPort.Code < 0) 
		{
			printf("Invalid code\n");
			return;
		}

		newAirPort.AmountInFlights = 0;
		newAirPort.AmountOutFlights = 0;

		airPorts[i] = newAirPort;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("New flight: \n");
		Flight newFlight;

		printf(" Type from where this flight is coming: ");
		scanf("%d", &newFlight.From);

		AirPort* from = find_airport(airPorts, 5, newFlight.From);

		if (from == NULL)
		{
			printf("Invalid code\n");
			return;
		}

		printf(" Type to where this flight is going: ");
		scanf("%d", &newFlight.To);

		AirPort* to = find_airport(airPorts, 5, newFlight.To);

		if (to == NULL)
		{
			printf("Invalid code\n");
			return;
		}

		from->AmountInFlights++;
		to->AmountOutFlights++;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("Air Ports:\n");
		printf(" Air Port Code %d has:\n", airPorts[i].Code);
		printf("  %d In flights\n", airPorts[i].AmountInFlights);
		printf("  %d Out flights\n", airPorts[i].AmountOutFlights);
	}
}