#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xcb0a126b, "module_layout" },
	{ 0x89f0d270, "param_ops_uint" },
	{ 0x750f20c1, "class_unregister" },
	{ 0x9a1ce951, "device_destroy" },
	{ 0xfe990052, "gpio_free" },
	{ 0x92fe519d, "kthread_stop" },
	{ 0x4fabee74, "wake_up_process" },
	{ 0x4802e17e, "kthread_create_on_node" },
	{ 0xda053c82, "__mutex_do_init" },
	{ 0x41bf7845, "__rt_mutex_init" },
	{ 0x9647310, "gpiod_set_debounce" },
	{ 0xe83bf01d, "class_destroy" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x652b0cd9, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xea6dd11b, "__class_create" },
	{ 0x90ecee87, "__register_chrdev" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x140a52b, "_mutex_unlock" },
	{ 0x573a7d4f, "gpiod_get_raw_value" },
	{ 0x22d04384, "gpiod_set_raw_value" },
	{ 0x16ee9571, "gpio_to_desc" },
	{ 0x112a1d12, "_mutex_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FDF1341E0DB7868B2CD6E13");
