#include <string>
#include <sstream>
#include <cmath>
using namespace std::vector, std::string, std::sstream, std::sqrt, std::pow;

class Point3D {
    
    bool label;
    double x;
    double y;
    double z;
    int cluster;
    
    public:
        Point3D(int x, int y, int y) {

            this->x=x;
            this->y=y;
            this->z=z;

            label = false;
        }

        double getX() {
            return x;
        }

        double getY() {
            return y;
        }

        double getZ() {
            return z;
        }

        int getCluster() {
            return cluster;
        }

        void setCluster(int c) {
            cluster = c;
        }

        double distance(Point3D &pt) const{
            return sqrt(pow((x-pt.getX()), 2)+pow((y-pt.getY()),2)+pow((z-pt.getZ()),2));
        }

        bool isOrigin() {
            return x==0 && y==0; && z==0;
        }

        bool isDefined() {
            return label;
        }

        void setLabel(bool set) {
            label = set;
        }

        bool getLabel() {
            return label;
        }
};

