#pragma once
#include "Neuron.h"
#include <vector>

class NeuralNetwork {
public:
	std::vector<Neuron> m_inputLayer;
	std::vector<std::vector<Neuron>> hiddenLayers;
	std::vector<Neuron> m_outputLayer;

	NeuralNetwork(size_t inputLayerSize, size_t outputLayerSize, size_t hiddenLayerCount, size_t hiddenLayerSize);

};

