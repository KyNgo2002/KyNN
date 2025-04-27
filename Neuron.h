#pragma once
#include <functional>

class Neuron {
	int m_bias;
	std::function<double(double)> activationFunction;
	
	Neuron(std::function<double(double)> activationFunction) {
		this->m_bias = 0;
		this->activationFunction = activationFunction;
	}
};
