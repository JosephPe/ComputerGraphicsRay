#pragma once

#include "Color.h"
#include <vector>
#include <memory>
#include "Ray.h"

class Camera;
struct Ray;
struct RaycastHit;

class Scene
{
public:
    Scene() = default;
    Scene(const color3_t& topColor, const color3_t bottomColor) :
        m_topColor{ topColor }, m_bottomColor{ bottomColor } {}

    void Render(class Canvas& canvas);
    color3_t Trace(const ray_t& ray);
    void SetCamera(std::unique_ptr<Camera> camera);
private:
    std::vector <std::unique_ptr<Camera>> m_camera;
    color3_t m_topColor{ 0.5f, 0.7f, 1.0f };
    color3_t m_bottomColor{ 1 };
};