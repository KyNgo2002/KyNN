#include "../include/NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(size_t inputLayerSize, size_t outputLayerSize, size_t hiddenLayerCount, size_t hiddenLayerSize) {
	if (inputLayerSize == 0)
		throw std::invalid_argument("Input layer size must be greater than 0");
	m_inputLayer.resize(inputLayerSize);

	if (outputLayerSize == 0)
		throw std::invalid_argument("Output layer size must be greater than 0");
	m_outputLayer.resize(outputLayerSize);

	if (hiddenLayerCount > 0)
		m_outputLayer.resize(hiddenLayerCount);


}
