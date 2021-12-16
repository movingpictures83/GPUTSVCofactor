#ifndef GPUTSVCOFACTORPLUGIN_H
#define GPUTSVCOFACTORPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <map>

class GPUTSVCofactorPlugin : public Plugin {

	public:
		void input(std::string file);
		void run();
		void output(std::string file);
	private:
                std::string inputfile;
		std::string outputfile;
		double* A;
		double* C;
		int N;
		double val;
                std::map<std::string, std::string> parameters;
};

__global__ void coFactor(double* A, double* C, int N) {
               int i = blockIdx.x;
               int j = threadIdx.x;

               if((j+i) % 2 == 1){
                 C[i*N+j] = A[i*N+j] * -1;
               }
               else{
                 C[i*N+j] = A[i*N+j];
               }
              //C[i][j] = A[i][j] * pow(-1,((j+i)%2));
}

#endif
