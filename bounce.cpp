struct Vector3f {
    float x, y, z;
};

struct Bullet {
    Vector3f position;
    Vector3f velocity;
};

inline const Vector3f& Vector3f::operator+=(const Vector &other)
{
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

inline const Vector3f& Vector3f::operator*=(float v)
{
    x *= v;
    y *= v;
    z *= v;
    return *this;
}