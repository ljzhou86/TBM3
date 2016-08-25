
CC = g++
BOOST_INCLUDE	= /usr/local/include/boost
CUDA_DIR	= /usr/local/cuda
MAGMA_DIR	= /Users/anrris/opt/magma

OSFLAG		= -std=c++11 -m64 -O3 -fPIC -DADD_ -DHAVE_CUBLAS -DMIN_CUDA_ARCH=300 -w\
			-lmagma -lblas_fix -framework Accelerate -lcublas -lcudart -lstdc++ -lm -fopenmp