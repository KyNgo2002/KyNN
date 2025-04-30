#include "../include/NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(size_t inputLayerSize, size_t outputLayerSize, size_t hiddenLayerCount, size_t hiddenLayerSize) {
	
	// Error checking NN size parameters and allocating space
	if (inputLayerSize == 0)
		throw std::invalid_argument("Input layer size must be greater than 0");

	if (outputLayerSize == 0)
		throw std::invalid_argument("Output layer size must be greater than 0");

	if (hiddenLayerCount > 0) {
		if (hiddenLayerSize == 0)
			throw std::invalid_argument("Hidden layer size must be greater than 0 if hidden layer count is > 0");
	}



}
