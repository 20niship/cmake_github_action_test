#include <cwchar>
#include <iostream>
#include <pcl/io/pcd_io.h>

int main(){
  const std::string fname = "test.pcd";
  pcl::PointCloud<pcl::PointXYZRGB>::Ptr colored_cloud;
  auto raw_cloud = static_cast<pcl::PointCloud<pcl::PointXYZRGB>::Ptr>(new pcl::PointCloud<pcl::PointXYZRGB>());
  if(pcl::io::loadPCDFile<pcl::PointXYZRGB>(fname, *raw_cloud) == -1) {
    std::cerr << "Cloud reading failed.";
    return -1;
  }
  std::cout << raw_cloud->size() << " pc found1 " << std::endl;
  std::cout <<" success!!" << std::endl;
  /* return EXIT_FAILURE; */
  return EXIT_SUCCESS;
}
