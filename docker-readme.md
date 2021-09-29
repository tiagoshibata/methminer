# Running miner in docker container

## Host configuration

- Install docker
- Install nvidia container toolkit needs to be installed on host
  - Follow instructions from here: https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker


## Build docker image
```shell
# Defaults to -DETHASHCUDA=ON -DETHASHCL=ON
docker build -t methminer .
# Example to set flag for CL and CUDA to OFF
docker build --build-arg DETHASHCL=OFF --build-arg DETHASHCUDA=OFF -t methminer .
``` 

## Run docker container  
```shell
docker run --gpus all -e POOL="<Pool connection>" methminer

``` 
For details on how to format <Pool connection> follow the link: 
    https://github.com/tiagoshibata/methminer/blob/master/docs/POOL_EXAMPLES_ETH.md
