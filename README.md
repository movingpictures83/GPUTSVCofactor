# GPUTSVCofactor
# Language: CUDA
# Input: TXT
# Output: TSV
# Tested with: PluMA 1.0, CUDA 10

Compute matrix cofactor on the GPU

Original authors: Adam Tahoun, Fernando Serrano, Dane Parchment, and Gabriel Perez 

The plugin accepts as input a TXT file of tab-delimited keyword-value pairs:
matrix1: Matrix (TSV file)
N: Matrix size (assumed N X N)

Cofactor matrix will be output as a TSV file
