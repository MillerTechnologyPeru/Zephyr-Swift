// swift-tools-version: 6.0
import PackageDescription

let package = Package(
    name: "Zephyr",
    products: [
        .library(
            name: "Zephyr",
            targets: ["Zephyr"]
        )
    ],
    dependencies: [
        .package(
            url: "https://github.com/PureSwift/Bluetooth.git",
            branch: "master"
        ),
        .package(
            url: "https://github.com/PureSwift/GATT.git",
            branch: "master"
        )
    ],
    targets: [
        .target(
            name: "Zephyr",
            dependencies: [
                "CZephyr"
            ],
            swiftSettings: [
                .enableUpcomingFeature("Embedded")
            ]
        ),
        .target(
            name: "ZephyrBluetooth",
            dependencies: [
                "CZephyr",
                .product(
                    name: "Bluetooth",
                    package: "Bluetooth"
                ),
                .product(
                    name: "BluetoothGAP",
                    package: "Bluetooth"
                ),
                .product(
                    name: "BluetoothGATT",
                    package: "Bluetooth"
                ),
                .product(
                    name: "BluetoothHCI",
                    package: "Bluetooth"
                ),
                .product(
                    name: "GATT",
                    package: "GATT"
                )
            ],
            swiftSettings: [
                .enableUpcomingFeature("Embedded")
            ]
        ),
        .target(
            name: "CZephyr"
        ),
        .testTarget(
            name: "ZephyrTests",
            dependencies: [
                "Bluetooth",
                "Zephyr",
                "ZephyrBluetooth"
            ],
            swiftSettings: [
                .enableUpcomingFeature("Embedded")
            ]
        ),
    ]
)
