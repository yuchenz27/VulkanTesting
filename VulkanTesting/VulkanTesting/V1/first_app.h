#pragma once

#include "lve_window.h"
#include "lve_pipeline.h"
#include "lve_device.h"

namespace lve {
class FirstApp {
public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;
    
    void run();
private:
    LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    LveDevice lveDevice{lveWindow};
    LvePipeline lvePipeline{lveDevice,
                            "/Users/yuchen/Dev/vulkan-projects/VulkanTesting/VulkanTesting/V1/shaders/simple_shader.vert.spv",
                            "/Users/yuchen/Dev/vulkan-projects/VulkanTesting/VulkanTesting/V1/shaders/simple_shader.frag.spv",
                            LvePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
};
}
