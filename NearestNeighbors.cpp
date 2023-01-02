#include <list>

class NearestNeighbors {
    list<Point3D> points;

    public:

        NearestNeighbors(list<Point3D> listOfPoints){
            points = listOfPoints;
        }

        list<Point3D> rangeQuery(Point3D p, double eps){
            list<Point3D> newList;
            for(Point3D const &point : p){
                if (p.distance(point)<=eps){
                    newList.push_back(point);
                }
            }
            return newList;
        }
};
