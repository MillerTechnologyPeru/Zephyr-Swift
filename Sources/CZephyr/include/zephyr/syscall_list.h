/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_DEVICE_GET_BINDING 0
#define K_SYSCALL_DEVICE_GET_BY_DT_NODELABEL 1
#define K_SYSCALL_DEVICE_INIT 2
#define K_SYSCALL_DEVICE_IS_READY 3
#define K_SYSCALL_K_BUSY_WAIT 4
#define K_SYSCALL_K_CONDVAR_BROADCAST 5
#define K_SYSCALL_K_CONDVAR_INIT 6
#define K_SYSCALL_K_CONDVAR_SIGNAL 7
#define K_SYSCALL_K_CONDVAR_WAIT 8
#define K_SYSCALL_K_EVENT_CLEAR 9
#define K_SYSCALL_K_EVENT_INIT 10
#define K_SYSCALL_K_EVENT_POST 11
#define K_SYSCALL_K_EVENT_SET 12
#define K_SYSCALL_K_EVENT_SET_MASKED 13
#define K_SYSCALL_K_EVENT_WAIT 14
#define K_SYSCALL_K_EVENT_WAIT_ALL 15
#define K_SYSCALL_K_FLOAT_DISABLE 16
#define K_SYSCALL_K_FLOAT_ENABLE 17
#define K_SYSCALL_K_FUTEX_WAIT 18
#define K_SYSCALL_K_FUTEX_WAKE 19
#define K_SYSCALL_K_IS_PREEMPT_THREAD 20
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 21
#define K_SYSCALL_K_MSGQ_GET 22
#define K_SYSCALL_K_MSGQ_GET_ATTRS 23
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 24
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 25
#define K_SYSCALL_K_MSGQ_PEEK 26
#define K_SYSCALL_K_MSGQ_PEEK_AT 27
#define K_SYSCALL_K_MSGQ_PURGE 28
#define K_SYSCALL_K_MSGQ_PUT 29
#define K_SYSCALL_K_MUTEX_INIT 30
#define K_SYSCALL_K_MUTEX_LOCK 31
#define K_SYSCALL_K_MUTEX_UNLOCK 32
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 33
#define K_SYSCALL_K_OBJECT_ALLOC 34
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 35
#define K_SYSCALL_K_OBJECT_RELEASE 36
#define K_SYSCALL_K_PIPE_ALLOC_INIT 37
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 38
#define K_SYSCALL_K_PIPE_FLUSH 39
#define K_SYSCALL_K_PIPE_GET 40
#define K_SYSCALL_K_PIPE_PUT 41
#define K_SYSCALL_K_PIPE_READ_AVAIL 42
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 43
#define K_SYSCALL_K_POLL 44
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 45
#define K_SYSCALL_K_POLL_SIGNAL_INIT 46
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 47
#define K_SYSCALL_K_POLL_SIGNAL_RESET 48
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 49
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 50
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 51
#define K_SYSCALL_K_QUEUE_GET 52
#define K_SYSCALL_K_QUEUE_INIT 53
#define K_SYSCALL_K_QUEUE_IS_EMPTY 54
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 55
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 56
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 57
#define K_SYSCALL_K_SEM_COUNT_GET 58
#define K_SYSCALL_K_SEM_GIVE 59
#define K_SYSCALL_K_SEM_INIT 60
#define K_SYSCALL_K_SEM_RESET 61
#define K_SYSCALL_K_SEM_TAKE 62
#define K_SYSCALL_K_SLEEP 63
#define K_SYSCALL_K_STACK_ALLOC_INIT 64
#define K_SYSCALL_K_STACK_POP 65
#define K_SYSCALL_K_STACK_PUSH 66
#define K_SYSCALL_K_STR_OUT 67
#define K_SYSCALL_K_THREAD_ABORT 68
#define K_SYSCALL_K_THREAD_CREATE 69
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 70
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 71
#define K_SYSCALL_K_THREAD_DEADLINE_SET 72
#define K_SYSCALL_K_THREAD_JOIN 73
#define K_SYSCALL_K_THREAD_NAME_COPY 74
#define K_SYSCALL_K_THREAD_NAME_SET 75
#define K_SYSCALL_K_THREAD_PRIORITY_GET 76
#define K_SYSCALL_K_THREAD_PRIORITY_SET 77
#define K_SYSCALL_K_THREAD_RESUME 78
#define K_SYSCALL_K_THREAD_STACK_ALLOC 79
#define K_SYSCALL_K_THREAD_STACK_FREE 80
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 81
#define K_SYSCALL_K_THREAD_START 82
#define K_SYSCALL_K_THREAD_SUSPEND 83
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 84
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 85
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 86
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 87
#define K_SYSCALL_K_TIMER_START 88
#define K_SYSCALL_K_TIMER_STATUS_GET 89
#define K_SYSCALL_K_TIMER_STATUS_SYNC 90
#define K_SYSCALL_K_TIMER_STOP 91
#define K_SYSCALL_K_TIMER_USER_DATA_GET 92
#define K_SYSCALL_K_TIMER_USER_DATA_SET 93
#define K_SYSCALL_K_UPTIME_TICKS 94
#define K_SYSCALL_K_USLEEP 95
#define K_SYSCALL_K_WAKEUP 96
#define K_SYSCALL_K_YIELD 97
#define K_SYSCALL_LOG_BUFFERED_CNT 98
#define K_SYSCALL_LOG_FILTER_SET 99
#define K_SYSCALL_LOG_FRONTEND_FILTER_SET 100
#define K_SYSCALL_LOG_PANIC 101
#define K_SYSCALL_LOG_PROCESS 102
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 103
#define K_SYSCALL_Z_ERRNO 104
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 105
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 106
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 107
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 108
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 109
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 110
#define K_SYSCALL_BAD 111
#define K_SYSCALL_LIMIT 112


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 113
#define K_SYSCALL_ADC_READ 114
#define K_SYSCALL_ADC_READ_ASYNC 115
#define K_SYSCALL_ATOMIC_ADD 116
#define K_SYSCALL_ATOMIC_AND 117
#define K_SYSCALL_ATOMIC_CAS 118
#define K_SYSCALL_ATOMIC_NAND 119
#define K_SYSCALL_ATOMIC_OR 120
#define K_SYSCALL_ATOMIC_PTR_CAS 121
#define K_SYSCALL_ATOMIC_PTR_SET 122
#define K_SYSCALL_ATOMIC_SET 123
#define K_SYSCALL_ATOMIC_SUB 124
#define K_SYSCALL_ATOMIC_XOR 125
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 126
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 127
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 128
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 129
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 130
#define K_SYSCALL_AUXDISPLAY_CLEAR 131
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 132
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 133
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 134
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 135
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 136
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 137
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 138
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 139
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 140
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 141
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 142
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 143
#define K_SYSCALL_AUXDISPLAY_WRITE 144
#define K_SYSCALL_BBRAM_CHECK_INVALID 145
#define K_SYSCALL_BBRAM_CHECK_POWER 146
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 147
#define K_SYSCALL_BBRAM_GET_SIZE 148
#define K_SYSCALL_BBRAM_READ 149
#define K_SYSCALL_BBRAM_WRITE 150
#define K_SYSCALL_BC12_SET_RESULT_CB 151
#define K_SYSCALL_BC12_SET_ROLE 152
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 153
#define K_SYSCALL_CAN_CALC_TIMING 154
#define K_SYSCALL_CAN_CALC_TIMING_DATA 155
#define K_SYSCALL_CAN_GET_BITRATE_MAX 156
#define K_SYSCALL_CAN_GET_BITRATE_MIN 157
#define K_SYSCALL_CAN_GET_CAPABILITIES 158
#define K_SYSCALL_CAN_GET_CORE_CLOCK 159
#define K_SYSCALL_CAN_GET_MAX_FILTERS 160
#define K_SYSCALL_CAN_GET_MODE 161
#define K_SYSCALL_CAN_GET_STATE 162
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 163
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 164
#define K_SYSCALL_CAN_GET_TIMING_MAX 165
#define K_SYSCALL_CAN_GET_TIMING_MIN 166
#define K_SYSCALL_CAN_GET_TRANSCEIVER 167
#define K_SYSCALL_CAN_RECOVER 168
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 169
#define K_SYSCALL_CAN_SEND 170
#define K_SYSCALL_CAN_SET_BITRATE 171
#define K_SYSCALL_CAN_SET_BITRATE_DATA 172
#define K_SYSCALL_CAN_SET_MODE 173
#define K_SYSCALL_CAN_SET_TIMING 174
#define K_SYSCALL_CAN_SET_TIMING_DATA 175
#define K_SYSCALL_CAN_START 176
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 177
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 178
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 179
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 180
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 181
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 182
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 183
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 184
#define K_SYSCALL_CAN_STOP 185
#define K_SYSCALL_CHARGER_CHARGE_ENABLE 186
#define K_SYSCALL_CHARGER_GET_PROP 187
#define K_SYSCALL_CHARGER_SET_PROP 188
#define K_SYSCALL_COMPARATOR_GET_OUTPUT 189
#define K_SYSCALL_COMPARATOR_SET_TRIGGER 190
#define K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING 191
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 192
#define K_SYSCALL_COUNTER_GET_FREQUENCY 193
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 194
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 195
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 196
#define K_SYSCALL_COUNTER_GET_PENDING_INT 197
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 198
#define K_SYSCALL_COUNTER_GET_VALUE 199
#define K_SYSCALL_COUNTER_GET_VALUE_64 200
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 201
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 202
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 203
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 204
#define K_SYSCALL_COUNTER_START 205
#define K_SYSCALL_COUNTER_STOP 206
#define K_SYSCALL_COUNTER_TICKS_TO_US 207
#define K_SYSCALL_COUNTER_US_TO_TICKS 208
#define K_SYSCALL_DAC_CHANNEL_SETUP 209
#define K_SYSCALL_DAC_WRITE_VALUE 210
#define K_SYSCALL_DEVMUX_SELECT_GET 211
#define K_SYSCALL_DEVMUX_SELECT_SET 212
#define K_SYSCALL_DMA_CHAN_FILTER 213
#define K_SYSCALL_DMA_RELEASE_CHANNEL 214
#define K_SYSCALL_DMA_REQUEST_CHANNEL 215
#define K_SYSCALL_DMA_RESUME 216
#define K_SYSCALL_DMA_START 217
#define K_SYSCALL_DMA_STOP 218
#define K_SYSCALL_DMA_SUSPEND 219
#define K_SYSCALL_EEPROM_GET_SIZE 220
#define K_SYSCALL_EEPROM_READ 221
#define K_SYSCALL_EEPROM_WRITE 222
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 223
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 224
#define K_SYSCALL_ENTROPY_GET_ENTROPY 225
#define K_SYSCALL_ESPI_CONFIG 226
#define K_SYSCALL_ESPI_FLASH_ERASE 227
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 228
#define K_SYSCALL_ESPI_READ_FLASH 229
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 230
#define K_SYSCALL_ESPI_READ_REQUEST 231
#define K_SYSCALL_ESPI_RECEIVE_OOB 232
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 233
#define K_SYSCALL_ESPI_SAF_ACTIVATE 234
#define K_SYSCALL_ESPI_SAF_CONFIG 235
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 236
#define K_SYSCALL_ESPI_SAF_FLASH_READ 237
#define K_SYSCALL_ESPI_SAF_FLASH_UNSUCCESS 238
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 239
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 240
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 241
#define K_SYSCALL_ESPI_SEND_OOB 242
#define K_SYSCALL_ESPI_SEND_VWIRE 243
#define K_SYSCALL_ESPI_WRITE_FLASH 244
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 245
#define K_SYSCALL_ESPI_WRITE_REQUEST 246
#define K_SYSCALL_FLASH_COPY 247
#define K_SYSCALL_FLASH_ERASE 248
#define K_SYSCALL_FLASH_EX_OP 249
#define K_SYSCALL_FLASH_FILL 250
#define K_SYSCALL_FLASH_FLATTEN 251
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 252
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 253
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 254
#define K_SYSCALL_FLASH_GET_PARAMETERS 255
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 256
#define K_SYSCALL_FLASH_READ 257
#define K_SYSCALL_FLASH_READ_JEDEC_ID 258
#define K_SYSCALL_FLASH_SFDP_READ 259
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 260
#define K_SYSCALL_FLASH_WRITE 261
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 262
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 263
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 264
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 265
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 266
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 267
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 268
#define K_SYSCALL_GNSS_GET_FIX_RATE 269
#define K_SYSCALL_GNSS_GET_LATEST_TIMEPULSE 270
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 271
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 272
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 273
#define K_SYSCALL_GNSS_SET_FIX_RATE 274
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 275
#define K_SYSCALL_GPIO_GET_PENDING_INT 276
#define K_SYSCALL_GPIO_PIN_CONFIGURE 277
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 278
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 279
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 280
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 281
#define K_SYSCALL_GPIO_PORT_GET_RAW 282
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 283
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 284
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 285
#define K_SYSCALL_HAPTICS_START_OUTPUT 286
#define K_SYSCALL_HAPTICS_STOP_OUTPUT 287
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 288
#define K_SYSCALL_HWINFO_GET_DEVICE_EUI64 289
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 290
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 291
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 292
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 293
#define K_SYSCALL_HWSPINLOCK_LOCK 294
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 295
#define K_SYSCALL_HWSPINLOCK_UNLOCK 296
#define K_SYSCALL_I2C_CONFIGURE 297
#define K_SYSCALL_I2C_GET_CONFIG 298
#define K_SYSCALL_I2C_RECOVER_BUS 299
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 300
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 301
#define K_SYSCALL_I2C_TRANSFER 302
#define K_SYSCALL_I2S_BUF_READ 303
#define K_SYSCALL_I2S_BUF_WRITE 304
#define K_SYSCALL_I2S_CONFIGURE 305
#define K_SYSCALL_I2S_TRIGGER 306
#define K_SYSCALL_I3C_DO_CCC 307
#define K_SYSCALL_I3C_TRANSFER 308
#define K_SYSCALL_IPM_COMPLETE 309
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 310
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 311
#define K_SYSCALL_IPM_SEND 312
#define K_SYSCALL_IPM_SET_ENABLED 313
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 314
#define K_SYSCALL_IVSHMEM_GET_ID 315
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 316
#define K_SYSCALL_IVSHMEM_GET_MEM 317
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 318
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 319
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 320
#define K_SYSCALL_IVSHMEM_GET_STATE 321
#define K_SYSCALL_IVSHMEM_GET_VECTORS 322
#define K_SYSCALL_IVSHMEM_INT_PEER 323
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 324
#define K_SYSCALL_IVSHMEM_SET_STATE 325
#define K_SYSCALL_KSCAN_CONFIG 326
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 327
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 328
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 329
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 330
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 331
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 332
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 333
#define K_SYSCALL_LED_BLINK 334
#define K_SYSCALL_LED_GET_INFO 335
#define K_SYSCALL_LED_OFF 336
#define K_SYSCALL_LED_ON 337
#define K_SYSCALL_LED_SET_BRIGHTNESS 338
#define K_SYSCALL_LED_SET_CHANNEL 339
#define K_SYSCALL_LED_SET_COLOR 340
#define K_SYSCALL_LED_WRITE_CHANNELS 341
#define K_SYSCALL_LLEXT_GET_FN_TABLE 342
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 343
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 344
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 345
#define K_SYSCALL_MBOX_MTU_GET 346
#define K_SYSCALL_MBOX_SEND 347
#define K_SYSCALL_MBOX_SET_ENABLED 348
#define K_SYSCALL_MDIO_BUS_DISABLE 349
#define K_SYSCALL_MDIO_BUS_ENABLE 350
#define K_SYSCALL_MDIO_READ 351
#define K_SYSCALL_MDIO_READ_C45 352
#define K_SYSCALL_MDIO_WRITE 353
#define K_SYSCALL_MDIO_WRITE_C45 354
#define K_SYSCALL_MSPI_CONFIG 355
#define K_SYSCALL_MSPI_DEV_CONFIG 356
#define K_SYSCALL_MSPI_GET_CHANNEL_STATUS 357
#define K_SYSCALL_MSPI_SCRAMBLE_CONFIG 358
#define K_SYSCALL_MSPI_TIMING_CONFIG 359
#define K_SYSCALL_MSPI_TRANSCEIVE 360
#define K_SYSCALL_MSPI_XIP_CONFIG 361
#define K_SYSCALL_NET_ADDR_NTOP 362
#define K_SYSCALL_NET_ADDR_PTON 363
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 364
#define K_SYSCALL_NET_IF_GET_BY_INDEX 365
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 366
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 367
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 368
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 369
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_ADDR_BY_INDEX 370
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 371
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 372
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 373
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 374
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 375
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 376
#define K_SYSCALL_PECI_CONFIG 377
#define K_SYSCALL_PECI_DISABLE 378
#define K_SYSCALL_PECI_ENABLE 379
#define K_SYSCALL_PECI_TRANSFER 380
#define K_SYSCALL_PS2_CONFIG 381
#define K_SYSCALL_PS2_DISABLE_CALLBACK 382
#define K_SYSCALL_PS2_ENABLE_CALLBACK 383
#define K_SYSCALL_PS2_READ 384
#define K_SYSCALL_PS2_WRITE 385
#define K_SYSCALL_PTP_CLOCK_GET 386
#define K_SYSCALL_PWM_CAPTURE_CYCLES 387
#define K_SYSCALL_PWM_DISABLE_CAPTURE 388
#define K_SYSCALL_PWM_ENABLE_CAPTURE 389
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 390
#define K_SYSCALL_PWM_SET_CYCLES 391
#define K_SYSCALL_RESET_LINE_ASSERT 392
#define K_SYSCALL_RESET_LINE_DEASSERT 393
#define K_SYSCALL_RESET_LINE_TOGGLE 394
#define K_SYSCALL_RESET_STATUS 395
#define K_SYSCALL_RETAINED_MEM_CLEAR 396
#define K_SYSCALL_RETAINED_MEM_READ 397
#define K_SYSCALL_RETAINED_MEM_SIZE 398
#define K_SYSCALL_RETAINED_MEM_WRITE 399
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 400
#define K_SYSCALL_RTC_ALARM_GET_TIME 401
#define K_SYSCALL_RTC_ALARM_IS_PENDING 402
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 403
#define K_SYSCALL_RTC_ALARM_SET_TIME 404
#define K_SYSCALL_RTC_GET_CALIBRATION 405
#define K_SYSCALL_RTC_GET_TIME 406
#define K_SYSCALL_RTC_SET_CALIBRATION 407
#define K_SYSCALL_RTC_SET_TIME 408
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 409
#define K_SYSCALL_RTIO_CQE_COPY_OUT 410
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 411
#define K_SYSCALL_RTIO_RELEASE_BUFFER 412
#define K_SYSCALL_RTIO_SQE_CANCEL 413
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 414
#define K_SYSCALL_RTIO_SUBMIT 415
#define K_SYSCALL_SDHC_CARD_BUSY 416
#define K_SYSCALL_SDHC_CARD_PRESENT 417
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 418
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 419
#define K_SYSCALL_SDHC_EXECUTE_TUNING 420
#define K_SYSCALL_SDHC_GET_HOST_PROPS 421
#define K_SYSCALL_SDHC_HW_RESET 422
#define K_SYSCALL_SDHC_REQUEST 423
#define K_SYSCALL_SDHC_SET_IO 424
#define K_SYSCALL_SENSOR_ATTR_GET 425
#define K_SYSCALL_SENSOR_ATTR_SET 426
#define K_SYSCALL_SENSOR_CHANNEL_GET 427
#define K_SYSCALL_SENSOR_GET_DECODER 428
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 429
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 430
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 431
#define K_SYSCALL_SIP_SUPERVISORY_CALL 432
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 433
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 434
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 435
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 436
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 437
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 438
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 439
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 440
#define K_SYSCALL_SMBUS_BLOCK_PCALL 441
#define K_SYSCALL_SMBUS_BLOCK_READ 442
#define K_SYSCALL_SMBUS_BLOCK_WRITE 443
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 444
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 445
#define K_SYSCALL_SMBUS_BYTE_READ 446
#define K_SYSCALL_SMBUS_BYTE_WRITE 447
#define K_SYSCALL_SMBUS_CONFIGURE 448
#define K_SYSCALL_SMBUS_GET_CONFIG 449
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 450
#define K_SYSCALL_SMBUS_PCALL 451
#define K_SYSCALL_SMBUS_QUICK 452
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 453
#define K_SYSCALL_SMBUS_WORD_DATA_READ 454
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 455
#define K_SYSCALL_SPI_RELEASE 456
#define K_SYSCALL_SPI_TRANSCEIVE 457
#define K_SYSCALL_STEPPER_ENABLE 458
#define K_SYSCALL_STEPPER_ENABLE_CONSTANT_VELOCITY_MODE 459
#define K_SYSCALL_STEPPER_GET_ACTUAL_POSITION 460
#define K_SYSCALL_STEPPER_GET_MICRO_STEP_RES 461
#define K_SYSCALL_STEPPER_IS_MOVING 462
#define K_SYSCALL_STEPPER_MOVE 463
#define K_SYSCALL_STEPPER_SET_ACTUAL_POSITION 464
#define K_SYSCALL_STEPPER_SET_CALLBACK 465
#define K_SYSCALL_STEPPER_SET_MAX_VELOCITY 466
#define K_SYSCALL_STEPPER_SET_MICRO_STEP_RES 467
#define K_SYSCALL_STEPPER_SET_TARGET_POSITION 468
#define K_SYSCALL_SYSCON_GET_BASE 469
#define K_SYSCALL_SYSCON_GET_SIZE 470
#define K_SYSCALL_SYSCON_READ_REG 471
#define K_SYSCALL_SYSCON_WRITE_REG 472
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 473
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 474
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 475
#define K_SYSCALL_SYS_CSRAND_GET 476
#define K_SYSCALL_SYS_RAND_GET 477
#define K_SYSCALL_TEE_CANCEL 478
#define K_SYSCALL_TEE_CLOSE_SESSION 479
#define K_SYSCALL_TEE_GET_VERSION 480
#define K_SYSCALL_TEE_INVOKE_FUNC 481
#define K_SYSCALL_TEE_OPEN_SESSION 482
#define K_SYSCALL_TEE_SHM_ALLOC 483
#define K_SYSCALL_TEE_SHM_FREE 484
#define K_SYSCALL_TEE_SHM_REGISTER 485
#define K_SYSCALL_TEE_SHM_UNREGISTER 486
#define K_SYSCALL_TEE_SUPPL_RECV 487
#define K_SYSCALL_TEE_SUPPL_SEND 488
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 489
#define K_SYSCALL_TGPIO_PIN_DISABLE 490
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 491
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 492
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 493
#define K_SYSCALL_TGPIO_PORT_GET_TIME 494
#define K_SYSCALL_UART_CONFIGURE 495
#define K_SYSCALL_UART_CONFIG_GET 496
#define K_SYSCALL_UART_DRV_CMD 497
#define K_SYSCALL_UART_ERR_CHECK 498
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 499
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 500
#define K_SYSCALL_UART_IRQ_IS_PENDING 501
#define K_SYSCALL_UART_IRQ_RX_DISABLE 502
#define K_SYSCALL_UART_IRQ_RX_ENABLE 503
#define K_SYSCALL_UART_IRQ_TX_DISABLE 504
#define K_SYSCALL_UART_IRQ_TX_ENABLE 505
#define K_SYSCALL_UART_IRQ_UPDATE 506
#define K_SYSCALL_UART_LINE_CTRL_GET 507
#define K_SYSCALL_UART_LINE_CTRL_SET 508
#define K_SYSCALL_UART_POLL_IN 509
#define K_SYSCALL_UART_POLL_IN_U16 510
#define K_SYSCALL_UART_POLL_OUT 511
#define K_SYSCALL_UART_POLL_OUT_U16 512
#define K_SYSCALL_UART_RX_DISABLE 513
#define K_SYSCALL_UART_RX_ENABLE 514
#define K_SYSCALL_UART_RX_ENABLE_U16 515
#define K_SYSCALL_UART_TX 516
#define K_SYSCALL_UART_TX_ABORT 517
#define K_SYSCALL_UART_TX_U16 518
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 519
#define K_SYSCALL_UPDATEHUB_CONFIRM 520
#define K_SYSCALL_UPDATEHUB_PROBE 521
#define K_SYSCALL_UPDATEHUB_REBOOT 522
#define K_SYSCALL_UPDATEHUB_UPDATE 523
#define K_SYSCALL_USER_FAULT 524
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 525
#define K_SYSCALL_W1_CONFIGURE 526
#define K_SYSCALL_W1_GET_SLAVE_COUNT 527
#define K_SYSCALL_W1_READ_BIT 528
#define K_SYSCALL_W1_READ_BLOCK 529
#define K_SYSCALL_W1_READ_BYTE 530
#define K_SYSCALL_W1_RESET_BUS 531
#define K_SYSCALL_W1_SEARCH_BUS 532
#define K_SYSCALL_W1_WRITE_BIT 533
#define K_SYSCALL_W1_WRITE_BLOCK 534
#define K_SYSCALL_W1_WRITE_BYTE 535
#define K_SYSCALL_WDT_DISABLE 536
#define K_SYSCALL_WDT_FEED 537
#define K_SYSCALL_WDT_SETUP 538
#define K_SYSCALL_XTENSA_USER_FAULT 539
#define K_SYSCALL_ZEPHYR_FPUTC 540
#define K_SYSCALL_ZEPHYR_FWRITE 541
#define K_SYSCALL_ZEPHYR_READ_STDIN 542
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 543
#define K_SYSCALL_ZSOCK_ACCEPT 544
#define K_SYSCALL_ZSOCK_BIND 545
#define K_SYSCALL_ZSOCK_CLOSE 546
#define K_SYSCALL_ZSOCK_CONNECT 547
#define K_SYSCALL_ZSOCK_FCNTL_IMPL 548
#define K_SYSCALL_ZSOCK_GETHOSTNAME 549
#define K_SYSCALL_ZSOCK_GETPEERNAME 550
#define K_SYSCALL_ZSOCK_GETSOCKNAME 551
#define K_SYSCALL_ZSOCK_GETSOCKOPT 552
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 553
#define K_SYSCALL_ZSOCK_INET_PTON 554
#define K_SYSCALL_ZSOCK_IOCTL_IMPL 555
#define K_SYSCALL_ZSOCK_LISTEN 556
#define K_SYSCALL_ZSOCK_RECVFROM 557
#define K_SYSCALL_ZSOCK_RECVMSG 558
#define K_SYSCALL_ZSOCK_SENDMSG 559
#define K_SYSCALL_ZSOCK_SENDTO 560
#define K_SYSCALL_ZSOCK_SETSOCKOPT 561
#define K_SYSCALL_ZSOCK_SHUTDOWN 562
#define K_SYSCALL_ZSOCK_SOCKET 563
#define K_SYSCALL_ZSOCK_SOCKETPAIR 564
#define K_SYSCALL_ZVFS_POLL 565
#define K_SYSCALL_ZVFS_SELECT 566
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 567


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */