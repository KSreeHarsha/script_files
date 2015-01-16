              dd-23552 [006] 363539.664950: funcgraph_entry:                   |  zpl_write() {
              dd-23552 [006] 363539.664951: funcgraph_entry:                   |    zfs_write() {
              dd-23552 [006] 363539.664952: funcgraph_entry:        0.730 us   |      rrw_enter_read();
              dd-23552 [006] 363539.664955: funcgraph_entry:        2.705 us   |      zfs_range_lock();
              dd-23552 [006] 363539.664959: funcgraph_entry:        0.703 us   |      zfs_owner_overquota();
              dd-23552 [006] 363539.664960: funcgraph_entry:        0.667 us   |      zfs_owner_overquota();
              dd-23552 [006] 363539.664962: funcgraph_entry:                   |      dmu_tx_create() {
              dd-23552 [006] 363539.664962: funcgraph_entry:        1.615 us   |        dmu_tx_create_dd();
              dd-23552 [006] 363539.664965: funcgraph_entry:                   |        dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.664965: funcgraph_entry:        0.636 us   |          spa_last_synced_txg();
              dd-23552 [006] 363539.664967: funcgraph_exit:         2.019 us   |        }
              dd-23552 [006] 363539.664967: funcgraph_exit:         5.765 us   |      }
              dd-23552 [006] 363539.664968: funcgraph_entry:                   |      dmu_tx_hold_sa() {
              dd-23552 [006] 363539.664969: funcgraph_entry:        0.736 us   |        sa_handle_object();
              dd-23552 [006] 363539.664971: funcgraph_entry:                   |        dmu_tx_hold_bonus() {
              dd-23552 [006] 363539.664971: funcgraph_entry:                   |          dmu_tx_hold_object_impl() {
              dd-23552 [006] 363539.664972: funcgraph_entry:                   |            dnode_hold() {
              dd-23552 [006] 363539.664973: funcgraph_entry:                   |              dnode_hold_impl() {
              dd-23552 [006] 363539.664974: funcgraph_entry:        0.743 us   |                dbuf_whichblock();
              dd-23552 [006] 363539.664975: funcgraph_entry:                   |                dbuf_hold() {
              dd-23552 [006] 363539.664976: funcgraph_entry:                   |                  dbuf_hold_impl() {
              dd-23552 [006] 363539.664978: funcgraph_entry:                   |                    __dbuf_hold_impl() {
              dd-23552 [006] 363539.664978: funcgraph_entry:                   |                      dbuf_find() {
              dd-23552 [006] 363539.664979: funcgraph_entry:        0.810 us   |                        dbuf_hash();
              dd-23552 [006] 363539.664981: funcgraph_exit:         3.076 us   |                      }
              dd-23552 [006] 363539.664982: funcgraph_exit:         4.461 us   |                    }
              dd-23552 [006] 363539.664983: funcgraph_exit:         6.714 us   |                  }
              dd-23552 [006] 363539.664983: funcgraph_exit:         7.990 us   |                }
              dd-23552 [006] 363539.664984: funcgraph_entry:        0.890 us   |                RW_WRITE_HELD();
              dd-23552 [006] 363539.664986: funcgraph_entry:                   |                dbuf_read() {
              dd-23552 [006] 363539.664986: funcgraph_entry:        0.810 us   |                  zrl_add();
              dd-23552 [006] 363539.664988: funcgraph_entry:        1.480 us   |                  dmu_zfetch();
              dd-23552 [006] 363539.664990: funcgraph_entry:        0.900 us   |                  RW_WRITE_HELD();
              dd-23552 [006] 363539.664992: funcgraph_entry:        0.553 us   |                  zrl_remove();
              dd-23552 [006] 363539.664993: funcgraph_exit:         7.423 us   |                }
              dd-23552 [006] 363539.664994: funcgraph_entry:        0.563 us   |                dmu_buf_get_user();
              dd-23552 [006] 363539.664995: funcgraph_entry:        0.554 us   |                zrl_add();
              dd-23552 [006] 363539.664997: funcgraph_entry:        0.573 us   |                zrl_remove();
              dd-23552 [006] 363539.664998: funcgraph_entry:                   |                dbuf_rele() {
              dd-23552 [006] 363539.664999: funcgraph_entry:        0.756 us   |                  dbuf_rele_and_unlock();
              dd-23552 [006] 363539.665000: funcgraph_exit:         2.079 us   |                }
              dd-23552 [006] 363539.665001: funcgraph_exit:       + 28.090 us  |              }
              dd-23552 [006] 363539.665001: funcgraph_exit:       + 29.403 us  |            }
              dd-23552 [006] 363539.665003: funcgraph_exit:       + 31.447 us  |          }
              dd-23552 [006] 363539.665004: funcgraph_entry:                   |          dmu_tx_count_dnode() {
              dd-23552 [006] 363539.665004: funcgraph_entry:                   |            dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665005: funcgraph_entry:                   |              dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665006: funcgraph_entry:        0.590 us   |                spa_last_synced_txg();
              dd-23552 [006] 363539.665007: funcgraph_exit:         1.956 us   |              }
              dd-23552 [006] 363539.665008: funcgraph_entry:        0.677 us   |              ddt_prefetch();
              dd-23552 [006] 363539.665009: funcgraph_exit:         4.654 us   |            }
              dd-23552 [006] 363539.665009: funcgraph_exit:         5.957 us   |          }
              dd-23552 [006] 363539.665010: funcgraph_exit:       + 39.601 us  |        }
              dd-23552 [006] 363539.665011: funcgraph_entry:        0.700 us   |        dmu_tx_sa_registration_hold();
              dd-23552 [006] 363539.665013: funcgraph_entry:        0.643 us   |        zrl_add();
              dd-23552 [006] 363539.665014: funcgraph_entry:        0.577 us   |        zrl_remove();
              dd-23552 [006] 363539.665015: funcgraph_exit:       + 46.964 us  |      }
              dd-23552 [006] 363539.665016: funcgraph_entry:                   |      dmu_tx_hold_write() {
              dd-23552 [006] 363539.665017: funcgraph_entry:                   |        dmu_tx_hold_object_impl() {
              dd-23552 [006] 363539.665017: funcgraph_entry:                   |          dnode_hold() {
              dd-23552 [006] 363539.665018: funcgraph_entry:                   |            dnode_hold_impl() {
              dd-23552 [006] 363539.665019: funcgraph_entry:        0.625 us   |              dbuf_whichblock();
              dd-23552 [006] 363539.665020: funcgraph_entry:                   |              dbuf_hold() {
              dd-23552 [006] 363539.665021: funcgraph_entry:                   |                dbuf_hold_impl() {
              dd-23552 [006] 363539.665022: funcgraph_entry:                   |                  __dbuf_hold_impl() {
              dd-23552 [006] 363539.665023: funcgraph_entry:                   |                    dbuf_find() {
              dd-23552 [006] 363539.665024: funcgraph_entry:        0.690 us   |                      dbuf_hash();
              dd-23552 [006] 363539.665025: funcgraph_exit:         2.156 us   |                    }
              dd-23552 [006] 363539.665026: funcgraph_exit:         3.565 us   |                  }
              dd-23552 [006] 363539.665027: funcgraph_exit:         5.715 us   |                }
              dd-23552 [006] 363539.665027: funcgraph_exit:         7.016 us   |              }
              dd-23552 [006] 363539.665028: funcgraph_entry:        0.803 us   |              RW_WRITE_HELD();
              dd-23552 [006] 363539.665030: funcgraph_entry:                   |              dbuf_read() {
              dd-23552 [006] 363539.665030: funcgraph_entry:        0.683 us   |                zrl_add();
              dd-23552 [006] 363539.665032: funcgraph_entry:        0.883 us   |                dmu_zfetch();
              dd-23552 [006] 363539.665033: funcgraph_entry:        0.763 us   |                RW_WRITE_HELD();
              dd-23552 [006] 363539.665035: funcgraph_entry:        0.526 us   |                zrl_remove();
              dd-23552 [006] 363539.665036: funcgraph_exit:         6.227 us   |              }
              dd-23552 [006] 363539.665036: funcgraph_entry:        0.593 us   |              dmu_buf_get_user();
              dd-23552 [006] 363539.665038: funcgraph_entry:        0.617 us   |              zrl_add();
              dd-23552 [006] 363539.665039: funcgraph_entry:        0.639 us   |              zrl_remove();
              dd-23552 [006] 363539.665040: funcgraph_entry:                   |              dbuf_rele() {
              dd-23552 [006] 363539.665041: funcgraph_entry:        0.615 us   |                dbuf_rele_and_unlock();
              dd-23552 [006] 363539.665042: funcgraph_exit:         1.865 us   |              }
              dd-23552 [006] 363539.665043: funcgraph_exit:       + 24.985 us  |            }
              dd-23552 [006] 363539.665043: funcgraph_exit:       + 26.141 us  |          }
              dd-23552 [006] 363539.665044: funcgraph_exit:       + 27.829 us  |        }
              dd-23552 [006] 363539.665045: funcgraph_entry:        1.136 us   |        dmu_tx_count_write();
              dd-23552 [006] 363539.665047: funcgraph_entry:                   |        dmu_tx_count_dnode() {
              dd-23552 [006] 363539.665048: funcgraph_entry:                   |          dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665048: funcgraph_entry:                   |            dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665049: funcgraph_entry:        0.567 us   |              spa_last_synced_txg();
              dd-23552 [006] 363539.665050: funcgraph_exit:         1.746 us   |            }
              dd-23552 [006] 363539.665051: funcgraph_entry:        0.590 us   |            ddt_prefetch();
              dd-23552 [006] 363539.665052: funcgraph_exit:         4.145 us   |          }
              dd-23552 [006] 363539.665052: funcgraph_exit:         5.493 us   |        }
              dd-23552 [006] 363539.665053: funcgraph_exit:       + 37.062 us  |      }
              dd-23552 [006] 363539.665054: funcgraph_entry:        0.780 us   |      zfs_sa_upgrade_txholds();
              dd-23552 [006] 363539.665056: funcgraph_entry:                   |      dmu_tx_assign() {
              dd-23552 [006] 363539.665056: funcgraph_entry:        0.730 us   |        spa_suspended();
              dd-23552 [006] 363539.665058: funcgraph_entry:        0.863 us   |        dsl_pool_need_dirty_delay();
              dd-23552 [006] 363539.665059: funcgraph_entry:        1.006 us   |        txg_hold_open();
              dd-23552 [006] 363539.665061: funcgraph_entry:                   |        dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665062: funcgraph_entry:        0.654 us   |          spa_last_synced_txg();
              dd-23552 [006] 363539.665063: funcgraph_exit:         1.892 us   |        }
              dd-23552 [006] 363539.665064: funcgraph_entry:        0.592 us   |        spa_get_asize();
              dd-23552 [006] 363539.665065: funcgraph_entry:        0.707 us   |        spa_get_asize();
              dd-23552 [006] 363539.665066: funcgraph_entry:        0.587 us   |        spa_get_asize();
              dd-23552 [006] 363539.665068: funcgraph_entry:                   |        dsl_dir_tempreserve_space() {
              dd-23552 [006] 363539.665069: funcgraph_entry:        0.942 us   |          arc_tempreserve_space();
              dd-23552 [006] 363539.665071: funcgraph_entry:                   |          dsl_dir_tempreserve_impl() {
              dd-23552 [006] 363539.665073: funcgraph_entry:        9.822 us   |            dsl_dataset_check_quota();
              dd-23552 [006] 363539.665084: funcgraph_entry:                   |            dsl_pool_adjustedsize() {
              dd-23552 [006] 363539.665084: funcgraph_entry:        0.696 us   |              spa_get_dspace();
              dd-23552 [006] 363539.665085: funcgraph_exit:         2.029 us   |            }
              dd-23552 [006] 363539.665086: funcgraph_entry:        0.649 us   |            spa_normal_class();
              dd-23552 [006] 363539.665088: funcgraph_entry:        0.690 us   |            metaslab_class_get_deferred();
              dd-23552 [006] 363539.665089: funcgraph_exit:       + 17.984 us  |          }
              dd-23552 [006] 363539.665090: funcgraph_exit:       + 22.102 us  |        }
              dd-23552 [006] 363539.665091: funcgraph_entry:        1.356 us   |        txg_rele_to_quiesce();
              dd-23552 [006] 363539.665093: funcgraph_exit:       + 37.121 us  |      }
              dd-23552 [006] 363539.665094: funcgraph_entry:                   |      zfs_grow_blocksize() {
              dd-23552 [006] 363539.665094: funcgraph_entry:                   |        dmu_object_set_blocksize() {
              dd-23552 [006] 363539.665095: funcgraph_entry:                   |          dnode_hold() {
              dd-23552 [006] 363539.665096: funcgraph_entry:                   |            dnode_hold_impl() {
              dd-23552 [006] 363539.665097: funcgraph_entry:        0.572 us   |              dbuf_whichblock();
              dd-23552 [006] 363539.665098: funcgraph_entry:                   |              dbuf_hold() {
              dd-23552 [006] 363539.665098: funcgraph_entry:                   |                dbuf_hold_impl() {
              dd-23552 [006] 363539.665100: funcgraph_entry:                   |                  __dbuf_hold_impl() {
              dd-23552 [006] 363539.665101: funcgraph_entry:                   |                    dbuf_find() {
              dd-23552 [006] 363539.665101: funcgraph_entry:        0.673 us   |                      dbuf_hash();
              dd-23552 [006] 363539.665103: funcgraph_exit:         2.169 us   |                    }
              dd-23552 [006] 363539.665103: funcgraph_exit:         3.541 us   |                  }
              dd-23552 [006] 363539.665104: funcgraph_exit:         5.747 us   |                }
              dd-23552 [006] 363539.665105: funcgraph_exit:         7.113 us   |              }
              dd-23552 [006] 363539.665106: funcgraph_entry:        0.727 us   |              RW_WRITE_HELD();
              dd-23552 [006] 363539.665107: funcgraph_entry:                   |              dbuf_read() {
              dd-23552 [006] 363539.665108: funcgraph_entry:        0.577 us   |                zrl_add();
              dd-23552 [006] 363539.665109: funcgraph_entry:        1.056 us   |                dmu_zfetch();
              dd-23552 [006] 363539.665111: funcgraph_entry:        0.713 us   |                RW_WRITE_HELD();
              dd-23552 [006] 363539.665112: funcgraph_entry:        0.613 us   |                zrl_remove();
              dd-23552 [006] 363539.665113: funcgraph_exit:         6.244 us   |              }
              dd-23552 [006] 363539.665114: funcgraph_entry:        0.566 us   |              dmu_buf_get_user();
              dd-23552 [006] 363539.665115: funcgraph_entry:        0.620 us   |              zrl_add();
              dd-23552 [006] 363539.665116: funcgraph_entry:        0.560 us   |              zrl_remove();
              dd-23552 [006] 363539.665118: funcgraph_entry:                   |              dbuf_rele() {
              dd-23552 [006] 363539.665118: funcgraph_entry:        0.703 us   |                dbuf_rele_and_unlock();
              dd-23552 [006] 363539.665120: funcgraph_exit:         1.979 us   |              }
              dd-23552 [006] 363539.665120: funcgraph_exit:       + 24.415 us  |            }
              dd-23552 [006] 363539.665121: funcgraph_exit:       + 25.802 us  |          }
              dd-23552 [006] 363539.665121: funcgraph_entry:                   |          dnode_set_blksz() {
              dd-23552 [006] 363539.665123: funcgraph_entry:                   |            dbuf_hold_impl() {
              dd-23552 [006] 363539.665124: funcgraph_entry:                   |              __dbuf_hold_impl() {
              dd-23552 [006] 363539.665125: funcgraph_entry:                   |                dbuf_find() {
              dd-23552 [006] 363539.665125: funcgraph_entry:        0.699 us   |                  dbuf_hash();
              dd-23552 [006] 363539.665127: funcgraph_exit:         2.229 us   |                }
              dd-23552 [006] 363539.665128: funcgraph_entry:                   |                arc_buf_add_ref() {
              dd-23552 [006] 363539.665129: funcgraph_entry:        1.025 us   |                  add_reference();
              dd-23552 [006] 363539.665131: funcgraph_entry:                   |                  arc_access() {
              dd-23552 [006] 363539.665131: funcgraph_entry:        0.779 us   |                    arc_change_state();
              dd-23552 [006] 363539.665133: funcgraph_exit:         2.095 us   |                  }
              dd-23552 [006] 363539.665133: funcgraph_exit:         5.848 us   |                }
              dd-23552 [006] 363539.665134: funcgraph_exit:       + 10.389 us  |              }
              dd-23552 [006] 363539.665135: funcgraph_exit:       + 12.254 us  |            }
              dd-23552 [006] 363539.665136: funcgraph_entry:                   |            dbuf_new_size() {
              dd-23552 [006] 363539.665136: funcgraph_entry:                   |              dbuf_is_metadata() {
              dd-23552 [006] 363539.665137: funcgraph_entry:        0.590 us   |                zrl_add();
              dd-23552 [006] 363539.665138: funcgraph_entry:        0.550 us   |                zrl_remove();
              dd-23552 [006] 363539.665139: funcgraph_exit:         3.119 us   |              }
              dd-23552 [006] 363539.665140: funcgraph_entry:        0.630 us   |              zrl_add();
              dd-23552 [006] 363539.665142: funcgraph_entry:                   |              dmu_buf_will_dirty() {
              dd-23552 [006] 363539.665142: funcgraph_entry:        0.600 us   |                zrl_add();
              dd-23552 [006] 363539.665144: funcgraph_entry:        1.049 us   |                zrl_remove();
              dd-23552 [006] 363539.665145: funcgraph_entry:                   |                dbuf_read() {
              dd-23552 [006] 363539.665146: funcgraph_entry:        0.584 us   |                  zrl_add();
              dd-23552 [006] 363539.665148: funcgraph_entry:        0.765 us   |                  zrl_remove();
              dd-23552 [006] 363539.665149: funcgraph_exit:         3.322 us   |                }
              dd-23552 [006] 363539.665149: funcgraph_entry:                   |                dbuf_dirty() {
              dd-23552 [006] 363539.665150: funcgraph_entry:        0.530 us   |                  zrl_add();
              dd-23552 [006] 363539.665151: funcgraph_entry:                   |                  dnode_willuse_space() {
              dd-23552 [006] 363539.665152: funcgraph_entry:        0.600 us   |                    spa_get_asize();
              dd-23552 [006] 363539.665154: funcgraph_entry:                   |                    dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665155: funcgraph_entry:                   |                      dsl_dir_dirty() {
              dd-23552 [006] 363539.665155: funcgraph_entry:        0.679 us   |                        txg_list_add();
              dd-23552 [006] 363539.665157: funcgraph_entry:        0.697 us   |                        dmu_buf_add_ref();
              dd-23552 [006] 363539.665158: funcgraph_exit:         3.206 us   |                      }
              dd-23552 [006] 363539.665158: funcgraph_exit:         5.057 us   |                    }
              dd-23552 [006] 363539.665159: funcgraph_entry:        0.573 us   |                    dmu_tx_pool();
              dd-23552 [006] 363539.665160: funcgraph_entry:        0.864 us   |                    dsl_pool_dirty_space();
              dd-23552 [006] 363539.665162: funcgraph_entry:        0.559 us   |                    dmu_tx_willuse_space();
              dd-23552 [006] 363539.665163: funcgraph_exit:       + 11.631 us  |                  }
              dd-23552 [006] 363539.665164: funcgraph_entry:                   |                  dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665165: funcgraph_entry:                   |                    dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665165: funcgraph_entry:        0.606 us   |                      spa_last_synced_txg();
              dd-23552 [006] 363539.665166: funcgraph_exit:         2.075 us   |                    }
              dd-23552 [006] 363539.665167: funcgraph_entry:        0.817 us   |                    ddt_prefetch();
              dd-23552 [006] 363539.665168: funcgraph_exit:         4.641 us   |                  }
              dd-23552 [006] 363539.665170: funcgraph_entry:                   |                  arc_release() {
              dd-23552 [006] 363539.665171: funcgraph_entry:                   |                    arc_change_state() {
              dd-23552 [006] 363539.665172: funcgraph_entry:        0.975 us   |                      buf_hash_remove();
              dd-23552 [006] 363539.665173: funcgraph_exit:         2.329 us   |                    }
              dd-23552 [006] 363539.665174: funcgraph_entry:        0.639 us   |                    arc_buf_thaw();
              dd-23552 [006] 363539.665175: funcgraph_exit:         5.393 us   |                  }
              dd-23552 [006] 363539.665176: funcgraph_entry:        0.626 us   |                  dbuf_fix_old_data();
              dd-23552 [006] 363539.665178: funcgraph_entry:        0.587 us   |                  dmu_buf_add_ref();
              dd-23552 [006] 363539.665179: funcgraph_entry:                   |                  bp_get_dsize() {
              dd-23552 [006] 363539.665180: funcgraph_entry:        0.902 us   |                    spa_config_enter();
              dd-23552 [006] 363539.665181: funcgraph_entry:                   |                    dva_get_dsize_sync() {
              dd-23552 [006] 363539.665182: funcgraph_entry:        0.742 us   |                      vdev_lookup_top();
              dd-23552 [006] 363539.665184: funcgraph_exit:         2.122 us   |                    }
              dd-23552 [006] 363539.665184: funcgraph_entry:        0.979 us   |                    spa_config_exit();
              dd-23552 [006] 363539.665186: funcgraph_exit:         6.777 us   |                  }
              dd-23552 [006] 363539.665187: funcgraph_entry:        0.636 us   |                  ddt_prefetch();
              dd-23552 [006] 363539.665188: funcgraph_entry:                   |                  dnode_willuse_space() {
              dd-23552 [006] 363539.665188: funcgraph_entry:        0.592 us   |                    spa_get_asize();
              dd-23552 [006] 363539.665190: funcgraph_entry:                   |                    dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665191: funcgraph_entry:                   |                      dsl_dir_dirty() {
              dd-23552 [006] 363539.665191: funcgraph_entry:        0.686 us   |                        txg_list_add();
              dd-23552 [006] 363539.665192: funcgraph_exit:         1.836 us   |                      }
              dd-23552 [006] 363539.665193: funcgraph_exit:         3.154 us   |                    }
              dd-23552 [006] 363539.665194: funcgraph_entry:        0.577 us   |                    dmu_tx_pool();
              dd-23552 [006] 363539.665195: funcgraph_entry:        0.609 us   |                    dsl_pool_dirty_space();
              dd-23552 [006] 363539.665196: funcgraph_entry:        0.633 us   |                    dmu_tx_willuse_space();
              dd-23552 [006] 363539.665197: funcgraph_exit:         9.348 us   |                  }
              dd-23552 [006] 363539.665199: funcgraph_entry:        0.905 us   |                  dnode_new_blkid();
              dd-23552 [006] 363539.665200: funcgraph_entry:                   |                  dnode_setdirty() {
              dd-23552 [006] 363539.665201: funcgraph_entry:                   |                    dmu_objset_userquota_get_ids() {
              dd-23552 [006] 363539.665202: funcgraph_entry:                   |                      dmu_objset_userused_enabled() {
              dd-23552 [006] 363539.665203: funcgraph_entry:        0.569 us   |                        spa_version();
              dd-23552 [006] 363539.665204: funcgraph_exit:         1.956 us   |                      }
              dd-23552 [006] 363539.665204: funcgraph_exit:         3.319 us   |                    }
              dd-23552 [006] 363539.665205: funcgraph_entry:        0.757 us   |                    dnode_add_ref();
              dd-23552 [006] 363539.665207: funcgraph_entry:                   |                    dbuf_dirty() {
              dd-23552 [006] 363539.665208: funcgraph_entry:        0.674 us   |                      zrl_add();
              dd-23552 [006] 363539.665209: funcgraph_entry:                   |                      dnode_willuse_space() {
              dd-23552 [006] 363539.665210: funcgraph_entry:        0.497 us   |                        spa_get_asize();
              dd-23552 [006] 363539.665211: funcgraph_entry:                   |                        dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665212: funcgraph_entry:                   |                          dsl_dir_dirty() {
              dd-23552 [006] 363539.665212: funcgraph_entry:        0.714 us   |                            txg_list_add();
              dd-23552 [006] 363539.665213: funcgraph_exit:         1.813 us   |                          }
              dd-23552 [006] 363539.665214: funcgraph_exit:         3.172 us   |                        }
              dd-23552 [006] 363539.665215: funcgraph_entry:        0.533 us   |                        dmu_tx_pool();
              dd-23552 [006] 363539.665216: funcgraph_entry:        0.777 us   |                        dsl_pool_dirty_space();
              dd-23552 [006] 363539.665218: funcgraph_entry:        0.660 us   |                        dmu_tx_willuse_space();
              dd-23552 [006] 363539.665219: funcgraph_exit:         9.808 us   |                      }
              dd-23552 [006] 363539.665220: funcgraph_entry:                   |                      dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665220: funcgraph_entry:                   |                        dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665221: funcgraph_entry:        0.607 us   |                          spa_last_synced_txg();
              dd-23552 [006] 363539.665222: funcgraph_exit:         1.822 us   |                        }
              dd-23552 [006] 363539.665223: funcgraph_entry:        0.684 us   |                        ddt_prefetch();
              dd-23552 [006] 363539.665224: funcgraph_exit:         4.492 us   |                      }
              dd-23552 [006] 363539.665225: funcgraph_entry:        0.559 us   |                      dmu_buf_add_ref();
              dd-23552 [006] 363539.665227: funcgraph_entry:                   |                      bp_get_dsize() {
              dd-23552 [006] 363539.665227: funcgraph_entry:        0.702 us   |                        spa_config_enter();
              dd-23552 [006] 363539.665229: funcgraph_entry:                   |                        dva_get_dsize_sync() {
              dd-23552 [006] 363539.665229: funcgraph_entry:        0.559 us   |                          vdev_lookup_top();
              dd-23552 [006] 363539.665230: funcgraph_exit:         1.806 us   |                        }
              dd-23552 [006] 363539.665231: funcgraph_entry:                   |                        dva_get_dsize_sync() {
              dd-23552 [006] 363539.665232: funcgraph_entry:        0.522 us   |                          vdev_lookup_top();
              dd-23552 [006] 363539.665233: funcgraph_exit:         1.642 us   |                        }
              dd-23552 [006] 363539.665233: funcgraph_entry:        0.783 us   |                        spa_config_exit();
              dd-23552 [006] 363539.665235: funcgraph_exit:         8.079 us   |                      }
              dd-23552 [006] 363539.665235: funcgraph_entry:        0.629 us   |                      ddt_prefetch();
              dd-23552 [006] 363539.665237: funcgraph_entry:                   |                      dnode_willuse_space() {
              dd-23552 [006] 363539.665237: funcgraph_entry:        0.615 us   |                        spa_get_asize();
              dd-23552 [006] 363539.665239: funcgraph_entry:                   |                        dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665239: funcgraph_entry:                   |                          dsl_dir_dirty() {
              dd-23552 [006] 363539.665240: funcgraph_entry:        0.867 us   |                            txg_list_add();
              dd-23552 [006] 363539.665241: funcgraph_exit:         2.106 us   |                          }
              dd-23552 [006] 363539.665242: funcgraph_exit:         3.571 us   |                        }
              dd-23552 [006] 363539.665243: funcgraph_entry:        0.630 us   |                        dmu_tx_pool();
              dd-23552 [006] 363539.665244: funcgraph_entry:        0.613 us   |                        dsl_pool_dirty_space();
              dd-23552 [006] 363539.665245: funcgraph_entry:        0.544 us   |                        dmu_tx_willuse_space();
              dd-23552 [006] 363539.665246: funcgraph_exit:         9.602 us   |                      }
              dd-23552 [006] 363539.665247: funcgraph_entry:        0.624 us   |                      dnode_new_blkid();
              dd-23552 [006] 363539.665249: funcgraph_entry:                   |                      dbuf_dirty() {
              dd-23552 [006] 363539.665249: funcgraph_entry:        0.563 us   |                        zrl_add();
              dd-23552 [006] 363539.665251: funcgraph_entry:                   |                        dnode_willuse_space() {
              dd-23552 [006] 363539.665251: funcgraph_entry:        0.600 us   |                          spa_get_asize();
              dd-23552 [006] 363539.665252: funcgraph_entry:                   |                          dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665253: funcgraph_entry:                   |                            dsl_dir_dirty() {
              dd-23552 [006] 363539.665254: funcgraph_entry:        0.600 us   |                              txg_list_add();
              dd-23552 [006] 363539.665255: funcgraph_exit:         1.842 us   |                            }
              dd-23552 [006] 363539.665256: funcgraph_exit:         3.166 us   |                          }
              dd-23552 [006] 363539.665256: funcgraph_entry:        0.529 us   |                          dmu_tx_pool();
              dd-23552 [006] 363539.665257: funcgraph_entry:        0.717 us   |                          dsl_pool_dirty_space();
              dd-23552 [006] 363539.665259: funcgraph_entry:        0.623 us   |                          dmu_tx_willuse_space();
              dd-23552 [006] 363539.665260: funcgraph_exit:         9.246 us   |                        }
              dd-23552 [006] 363539.665260: funcgraph_entry:                   |                        dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665261: funcgraph_entry:                   |                          dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665262: funcgraph_entry:        0.640 us   |                            spa_last_synced_txg();
              dd-23552 [006] 363539.665263: funcgraph_exit:         1.859 us   |                          }
              dd-23552 [006] 363539.665264: funcgraph_entry:        0.577 us   |                          ddt_prefetch();
              dd-23552 [006] 363539.665265: funcgraph_exit:         4.298 us   |                        }
              dd-23552 [006] 363539.665266: funcgraph_entry:        0.826 us   |                        dmu_buf_add_ref();
              dd-23552 [006] 363539.665268: funcgraph_entry:                   |                        bp_get_dsize() {
              dd-23552 [006] 363539.665268: funcgraph_entry:        0.659 us   |                          spa_config_enter();
              dd-23552 [006] 363539.665269: funcgraph_entry:                   |                          dva_get_dsize_sync() {
              dd-23552 [006] 363539.665270: funcgraph_entry:        0.982 us   |                            vdev_lookup_top();
              dd-23552 [006] 363539.665272: funcgraph_exit:         2.202 us   |                          }
              dd-23552 [006] 363539.665272: funcgraph_entry:                   |                          dva_get_dsize_sync() {
              dd-23552 [006] 363539.665273: funcgraph_entry:        0.596 us   |                            vdev_lookup_top();
              dd-23552 [006] 363539.665274: funcgraph_exit:         1.766 us   |                          }
              dd-23552 [006] 363539.665275: funcgraph_entry:        0.890 us   |                          spa_config_exit();
              dd-23552 [006] 363539.665276: funcgraph_exit:         8.749 us   |                        }
              dd-23552 [006] 363539.665277: funcgraph_entry:        0.617 us   |                        ddt_prefetch();
              dd-23552 [006] 363539.665278: funcgraph_entry:                   |                        dnode_willuse_space() {
              dd-23552 [006] 363539.665279: funcgraph_entry:        0.585 us   |                          spa_get_asize();
              dd-23552 [006] 363539.665280: funcgraph_entry:                   |                          dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665281: funcgraph_entry:                   |                            dsl_dir_dirty() {
              dd-23552 [006] 363539.665281: funcgraph_entry:        0.673 us   |                              txg_list_add();
              dd-23552 [006] 363539.665282: funcgraph_exit:         1.929 us   |                            }
              dd-23552 [006] 363539.665283: funcgraph_exit:         3.165 us   |                          }
              dd-23552 [006] 363539.665284: funcgraph_entry:        0.613 us   |                          dmu_tx_pool();
              dd-23552 [006] 363539.665285: funcgraph_entry:        0.569 us   |                          dsl_pool_dirty_space();
              dd-23552 [006] 363539.665286: funcgraph_entry:        0.637 us   |                          dmu_tx_willuse_space();
              dd-23552 [006] 363539.665287: funcgraph_exit:         9.149 us   |                        }
              dd-23552 [006] 363539.665288: funcgraph_entry:                   |                        dbuf_dirty() {
              dd-23552 [006] 363539.665289: funcgraph_entry:        0.632 us   |                          zrl_add();
              dd-23552 [006] 363539.665290: funcgraph_entry:                   |                          dnode_willuse_space() {
              dd-23552 [006] 363539.665291: funcgraph_entry:        0.566 us   |                            spa_get_asize();
              dd-23552 [006] 363539.665292: funcgraph_entry:                   |                            dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665293: funcgraph_entry:                   |                              dsl_dir_dirty() {
              dd-23552 [006] 363539.665293: funcgraph_entry:        0.610 us   |                                txg_list_add();
              dd-23552 [006] 363539.665295: funcgraph_exit:         1.879 us   |                              }
              dd-23552 [006] 363539.665295: funcgraph_exit:         3.205 us   |                            }
              dd-23552 [006] 363539.665296: funcgraph_entry:        0.547 us   |                            dmu_tx_pool();
              dd-23552 [006] 363539.665297: funcgraph_entry:        0.743 us   |                            dsl_pool_dirty_space();
              dd-23552 [006] 363539.665299: funcgraph_entry:        0.570 us   |                            dmu_tx_willuse_space();
              dd-23552 [006] 363539.665300: funcgraph_exit:         9.232 us   |                          }
              dd-23552 [006] 363539.665300: funcgraph_entry:                   |                          dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665301: funcgraph_entry:                   |                            dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665302: funcgraph_entry:        0.667 us   |                              spa_last_synced_txg();
              dd-23552 [006] 363539.665303: funcgraph_exit:         1.899 us   |                            }
              dd-23552 [006] 363539.665303: funcgraph_entry:        0.660 us   |                            ddt_prefetch();
              dd-23552 [006] 363539.665305: funcgraph_exit:         4.468 us   |                          }
              dd-23552 [006] 363539.665310: funcgraph_entry:        0.720 us   |                          dmu_buf_add_ref();
              dd-23552 [006] 363539.665311: funcgraph_entry:                   |                          bp_get_dsize() {
              dd-23552 [006] 363539.665312: funcgraph_entry:        0.750 us   |                            spa_config_enter();
              dd-23552 [006] 363539.665314: funcgraph_entry:                   |                            dva_get_dsize_sync() {
              dd-23552 [006] 363539.665314: funcgraph_entry:        0.673 us   |                              vdev_lookup_top();
              dd-23552 [006] 363539.665315: funcgraph_exit:         2.006 us   |                            }
              dd-23552 [006] 363539.665316: funcgraph_entry:                   |                            dva_get_dsize_sync() {
              dd-23552 [006] 363539.665317: funcgraph_entry:        0.604 us   |                              vdev_lookup_top();
              dd-23552 [006] 363539.665318: funcgraph_exit:         1.849 us   |                            }
              dd-23552 [006] 363539.665319: funcgraph_entry:        0.740 us   |                            spa_config_exit();
              dd-23552 [006] 363539.665320: funcgraph_exit:         8.522 us   |                          }
              dd-23552 [006] 363539.665321: funcgraph_entry:        0.794 us   |                          ddt_prefetch();
              dd-23552 [006] 363539.665322: funcgraph_entry:                   |                          dnode_willuse_space() {
              dd-23552 [006] 363539.665323: funcgraph_entry:        0.560 us   |                            spa_get_asize();
              dd-23552 [006] 363539.665324: funcgraph_entry:                   |                            dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665325: funcgraph_entry:                   |                              dsl_dir_dirty() {
              dd-23552 [006] 363539.665325: funcgraph_entry:        0.646 us   |                                txg_list_add();
              dd-23552 [006] 363539.665327: funcgraph_exit:         1.792 us   |                              }
              dd-23552 [006] 363539.665327: funcgraph_exit:         3.265 us   |                            }
              dd-23552 [006] 363539.665328: funcgraph_entry:        0.590 us   |                            dmu_tx_pool();
              dd-23552 [006] 363539.665329: funcgraph_entry:        0.623 us   |                            dsl_pool_dirty_space();
              dd-23552 [006] 363539.665331: funcgraph_entry:        0.643 us   |                            dmu_tx_willuse_space();
              dd-23552 [006] 363539.665332: funcgraph_exit:       + 10.129 us  |                          }
              dd-23552 [006] 363539.665333: funcgraph_entry:                   |                          dbuf_dirty() {
              dd-23552 [006] 363539.665334: funcgraph_entry:        0.616 us   |                            zrl_add();
              dd-23552 [006] 363539.665336: funcgraph_entry:                   |                            dnode_willuse_space() {
              dd-23552 [006] 363539.665336: funcgraph_entry:        0.639 us   |                              spa_get_asize();
              dd-23552 [006] 363539.665337: funcgraph_entry:                   |                              dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665338: funcgraph_entry:                   |                                dsl_dir_dirty() {
              dd-23552 [006] 363539.665339: funcgraph_entry:        0.640 us   |                                  txg_list_add();
              dd-23552 [006] 363539.665340: funcgraph_exit:         1.722 us   |                                }
              dd-23552 [006] 363539.665340: funcgraph_exit:         2.931 us   |                              }
              dd-23552 [006] 363539.665341: funcgraph_entry:        0.593 us   |                              dmu_tx_pool();
              dd-23552 [006] 363539.665342: funcgraph_entry:        0.725 us   |                              dsl_pool_dirty_space();
              dd-23552 [006] 363539.665343: funcgraph_entry:        0.607 us   |                              dmu_tx_willuse_space();
              dd-23552 [006] 363539.665345: funcgraph_exit:         9.142 us   |                            }
              dd-23552 [006] 363539.665346: funcgraph_entry:                   |                            dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665346: funcgraph_entry:                   |                              dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665347: funcgraph_entry:        0.603 us   |                                spa_last_synced_txg();
              dd-23552 [006] 363539.665348: funcgraph_exit:         1.922 us   |                              }
              dd-23552 [006] 363539.665349: funcgraph_entry:        0.607 us   |                              ddt_prefetch();
              dd-23552 [006] 363539.665350: funcgraph_exit:         4.441 us   |                            }
              dd-23552 [006] 363539.665351: funcgraph_entry:        0.550 us   |                            dmu_buf_add_ref();
              dd-23552 [006] 363539.665352: funcgraph_entry:                   |                            bp_get_dsize() {
              dd-23552 [006] 363539.665353: funcgraph_entry:        0.723 us   |                              spa_config_enter();
              dd-23552 [006] 363539.665354: funcgraph_entry:                   |                              dva_get_dsize_sync() {
              dd-23552 [006] 363539.665355: funcgraph_entry:        0.580 us   |                                vdev_lookup_top();
              dd-23552 [006] 363539.665356: funcgraph_exit:         1.829 us   |                              }
              dd-23552 [006] 363539.665357: funcgraph_entry:                   |                              dva_get_dsize_sync() {
              dd-23552 [006] 363539.665358: funcgraph_entry:        0.577 us   |                                vdev_lookup_top();
              dd-23552 [006] 363539.665359: funcgraph_exit:         1.736 us   |                              }
              dd-23552 [006] 363539.665359: funcgraph_entry:        0.736 us   |                              spa_config_exit();
              dd-23552 [006] 363539.665361: funcgraph_exit:         8.299 us   |                            }
              dd-23552 [006] 363539.665361: funcgraph_entry:        0.597 us   |                            ddt_prefetch();
              dd-23552 [006] 363539.665363: funcgraph_entry:                   |                            dnode_willuse_space() {
              dd-23552 [006] 363539.665363: funcgraph_entry:        0.630 us   |                              spa_get_asize();
              dd-23552 [006] 363539.665364: funcgraph_entry:                   |                              dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665365: funcgraph_entry:                   |                                dsl_dir_dirty() {
              dd-23552 [006] 363539.665366: funcgraph_entry:        0.660 us   |                                  txg_list_add();
              dd-23552 [006] 363539.665367: funcgraph_exit:         1.893 us   |                                }
              dd-23552 [006] 363539.665368: funcgraph_exit:         3.238 us   |                              }
              dd-23552 [006] 363539.665368: funcgraph_entry:      + 20.596 us  |                              dmu_tx_pool();
              dd-23552 [006] 363539.665390: funcgraph_entry:        0.667 us   |                              dsl_pool_dirty_space();
              dd-23552 [006] 363539.665391: funcgraph_entry:        0.633 us   |                              dmu_tx_willuse_space();
              dd-23552 [006] 363539.665393: funcgraph_exit:       + 30.165 us  |                            }
              dd-23552 [006] 363539.665394: funcgraph_entry:                   |                            dbuf_dirty() {
              dd-23552 [006] 363539.665394: funcgraph_entry:        0.643 us   |                              zrl_add();
              dd-23552 [006] 363539.665396: funcgraph_entry:                   |                              dnode_willuse_space() {
              dd-23552 [006] 363539.665396: funcgraph_entry:        0.533 us   |                                spa_get_asize();
              dd-23552 [006] 363539.665398: funcgraph_entry:                   |                                dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665398: funcgraph_entry:                   |                                  dsl_dir_dirty() {
              dd-23552 [006] 363539.665399: funcgraph_entry:        0.652 us   |                                    txg_list_add();
              dd-23552 [006] 363539.665400: funcgraph_exit:         1.812 us   |                                  }
              dd-23552 [006] 363539.665401: funcgraph_exit:         3.119 us   |                                }
              dd-23552 [006] 363539.665401: funcgraph_entry:        0.612 us   |                                dmu_tx_pool();
              dd-23552 [006] 363539.665403: funcgraph_entry:        0.893 us   |                                dsl_pool_dirty_space();
              dd-23552 [006] 363539.665404: funcgraph_entry:        0.663 us   |                                dmu_tx_willuse_space();
              dd-23552 [006] 363539.665405: funcgraph_exit:         9.653 us   |                              }
              dd-23552 [006] 363539.665406: funcgraph_entry:                   |                              dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665407: funcgraph_entry:                   |                                dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665408: funcgraph_entry:        0.597 us   |                                  spa_last_synced_txg();
              dd-23552 [006] 363539.665409: funcgraph_exit:         2.199 us   |                                }
              dd-23552 [006] 363539.665410: funcgraph_entry:        0.625 us   |                                ddt_prefetch();
              dd-23552 [006] 363539.665411: funcgraph_exit:         4.621 us   |                              }
              dd-23552 [006] 363539.665412: funcgraph_entry:        0.644 us   |                              dmu_buf_add_ref();
              dd-23552 [006] 363539.665413: funcgraph_entry:                   |                              bp_get_dsize() {
              dd-23552 [006] 363539.665414: funcgraph_entry:        0.810 us   |                                spa_config_enter();
              dd-23552 [006] 363539.665416: funcgraph_entry:                   |                                dva_get_dsize_sync() {
              dd-23552 [006] 363539.665416: funcgraph_entry:        0.650 us   |                                  vdev_lookup_top();
              dd-23552 [006] 363539.665417: funcgraph_exit:         1.912 us   |                                }
              dd-23552 [006] 363539.665418: funcgraph_entry:                   |                                dva_get_dsize_sync() {
              dd-23552 [006] 363539.665419: funcgraph_entry:        0.633 us   |                                  vdev_lookup_top();
              dd-23552 [006] 363539.665420: funcgraph_exit:         1.963 us   |                                }
              dd-23552 [006] 363539.665421: funcgraph_entry:        0.830 us   |                                spa_config_exit();
              dd-23552 [006] 363539.665422: funcgraph_exit:         9.022 us   |                              }
              dd-23552 [006] 363539.665423: funcgraph_entry:        0.697 us   |                              ddt_prefetch();
              dd-23552 [006] 363539.665424: funcgraph_entry:                   |                              dnode_willuse_space() {
              dd-23552 [006] 363539.665425: funcgraph_entry:        0.570 us   |                                spa_get_asize();
              dd-23552 [006] 363539.665426: funcgraph_entry:                   |                                dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665427: funcgraph_entry:                   |                                  dsl_dir_dirty() {
              dd-23552 [006] 363539.665428: funcgraph_entry:        0.682 us   |                                    txg_list_add();
              dd-23552 [006] 363539.665429: funcgraph_exit:         1.925 us   |                                  }
              dd-23552 [006] 363539.665430: funcgraph_exit:         3.519 us   |                                }
              dd-23552 [006] 363539.665431: funcgraph_entry:        0.640 us   |                                dmu_tx_pool();
              dd-23552 [006] 363539.665432: funcgraph_entry:        0.679 us   |                                dsl_pool_dirty_space();
              dd-23552 [006] 363539.665433: funcgraph_entry:        0.673 us   |                                dmu_tx_willuse_space();
              dd-23552 [006] 363539.665434: funcgraph_exit:       + 10.098 us  |                              }
              dd-23552 [006] 363539.665435: funcgraph_entry:                   |                              dbuf_dirty() {
              dd-23552 [006] 363539.665436: funcgraph_entry:        0.656 us   |                                zrl_add();
              dd-23552 [006] 363539.665438: funcgraph_entry:                   |                                dnode_willuse_space() {
              dd-23552 [006] 363539.665438: funcgraph_entry:        0.662 us   |                                  spa_get_asize();
              dd-23552 [006] 363539.665439: funcgraph_entry:                   |                                  dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665440: funcgraph_entry:                   |                                    dsl_dir_dirty() {
              dd-23552 [006] 363539.665441: funcgraph_entry:        0.577 us   |                                      txg_list_add();
              dd-23552 [006] 363539.665442: funcgraph_exit:         1.656 us   |                                    }
              dd-23552 [006] 363539.665442: funcgraph_exit:         2.875 us   |                                  }
              dd-23552 [006] 363539.665443: funcgraph_entry:        0.520 us   |                                  dmu_tx_pool();
              dd-23552 [006] 363539.665444: funcgraph_entry:        0.659 us   |                                  dsl_pool_dirty_space();
              dd-23552 [006] 363539.665445: funcgraph_entry:        0.554 us   |                                  dmu_tx_willuse_space();
              dd-23552 [006] 363539.665446: funcgraph_exit:         8.836 us   |                                }
              dd-23552 [006] 363539.665447: funcgraph_entry:                   |                                dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665448: funcgraph_entry:                   |                                  dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665448: funcgraph_entry:        0.546 us   |                                    spa_last_synced_txg();
              dd-23552 [006] 363539.665449: funcgraph_exit:         1.752 us   |                                  }
              dd-23552 [006] 363539.665450: funcgraph_entry:        0.626 us   |                                  ddt_prefetch();
              dd-23552 [006] 363539.665451: funcgraph_exit:         4.105 us   |                                }
              dd-23552 [006] 363539.665452: funcgraph_entry:        0.503 us   |                                dmu_buf_add_ref();
              dd-23552 [006] 363539.665453: funcgraph_entry:                   |                                bp_get_dsize() {
              dd-23552 [006] 363539.665454: funcgraph_entry:        0.614 us   |                                  spa_config_enter();
              dd-23552 [006] 363539.665455: funcgraph_entry:                   |                                  dva_get_dsize_sync() {
              dd-23552 [006] 363539.665456: funcgraph_entry:        0.537 us   |                                    vdev_lookup_top();
              dd-23552 [006] 363539.665457: funcgraph_exit:         1.726 us   |                                  }
              dd-23552 [006] 363539.665457: funcgraph_entry:                   |                                  dva_get_dsize_sync() {
              dd-23552 [006] 363539.665458: funcgraph_entry:        0.596 us   |                                    vdev_lookup_top();
              dd-23552 [006] 363539.665459: funcgraph_exit:         1.726 us   |                                  }
              dd-23552 [006] 363539.665460: funcgraph_entry:        0.806 us   |                                  spa_config_exit();
              dd-23552 [006] 363539.665461: funcgraph_exit:         7.909 us   |                                }
              dd-23552 [006] 363539.665462: funcgraph_entry:        0.597 us   |                                ddt_prefetch();
              dd-23552 [006] 363539.665463: funcgraph_entry:                   |                                dnode_willuse_space() {
              dd-23552 [006] 363539.665464: funcgraph_entry:        0.540 us   |                                  spa_get_asize();
              dd-23552 [006] 363539.665465: funcgraph_entry:                   |                                  dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665466: funcgraph_entry:                   |                                    dsl_dir_dirty() {
              dd-23552 [006] 363539.665466: funcgraph_entry:        0.637 us   |                                      txg_list_add();
              dd-23552 [006] 363539.665468: funcgraph_exit:         1.793 us   |                                    }
              dd-23552 [006] 363539.665468: funcgraph_exit:         3.106 us   |                                  }
              dd-23552 [006] 363539.665469: funcgraph_entry:        0.649 us   |                                  dmu_tx_pool();
              dd-23552 [006] 363539.665470: funcgraph_entry:        0.554 us   |                                  dsl_pool_dirty_space();
              dd-23552 [006] 363539.665471: funcgraph_entry:        0.550 us   |                                  dmu_tx_willuse_space();
              dd-23552 [006] 363539.665472: funcgraph_exit:         8.892 us   |                                }
              dd-23552 [006] 363539.665473: funcgraph_entry:                   |                                dbuf_dirty() {
              dd-23552 [006] 363539.665474: funcgraph_entry:        0.580 us   |                                  zrl_add();
              dd-23552 [006] 363539.665475: funcgraph_entry:                   |                                  dnode_willuse_space() {
              dd-23552 [006] 363539.665476: funcgraph_entry:        0.550 us   |                                    spa_get_asize();
              dd-23552 [006] 363539.665477: funcgraph_entry:                   |                                    dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665478: funcgraph_entry:                   |                                      dsl_dir_dirty() {
              dd-23552 [006] 363539.665478: funcgraph_entry:        0.657 us   |                                        txg_list_add();
              dd-23552 [006] 363539.665480: funcgraph_exit:         2.046 us   |                                      }
              dd-23552 [006] 363539.665480: funcgraph_exit:         3.325 us   |                                    }
              dd-23552 [006] 363539.665481: funcgraph_entry:        0.606 us   |                                    dmu_tx_pool();
              dd-23552 [006] 363539.665482: funcgraph_entry:        0.754 us   |                                    dsl_pool_dirty_space();
              dd-23552 [006] 363539.665483: funcgraph_entry:        0.593 us   |                                    dmu_tx_willuse_space();
              dd-23552 [006] 363539.665485: funcgraph_exit:         9.445 us   |                                  }
              dd-23552 [006] 363539.665485: funcgraph_entry:                   |                                  dsl_dataset_block_freeable() {
              dd-23552 [006] 363539.665486: funcgraph_entry:                   |                                    dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665487: funcgraph_entry:        0.500 us   |                                      spa_last_synced_txg();
              dd-23552 [006] 363539.665488: funcgraph_exit:         1.672 us   |                                    }
              dd-23552 [006] 363539.665488: funcgraph_entry:        0.620 us   |                                    ddt_prefetch();
              dd-23552 [006] 363539.665490: funcgraph_exit:         4.198 us   |                                  }
              dd-23552 [006] 363539.665491: funcgraph_entry:        0.743 us   |                                  dmu_buf_add_ref();
              dd-23552 [006] 363539.665492: funcgraph_entry:                   |                                  bp_get_dsize() {
              dd-23552 [006] 363539.665493: funcgraph_entry:        0.723 us   |                                    spa_config_enter();
              dd-23552 [006] 363539.665494: funcgraph_entry:                   |                                    dva_get_dsize_sync() {
              dd-23552 [006] 363539.665495: funcgraph_entry:        0.610 us   |                                      vdev_lookup_top();
              dd-23552 [006] 363539.665496: funcgraph_exit:         1.865 us   |                                    }
              dd-23552 [006] 363539.665497: funcgraph_entry:                   |                                    dva_get_dsize_sync() {
              dd-23552 [006] 363539.665498: funcgraph_entry:        0.599 us   |                                      vdev_lookup_top();
              dd-23552 [006] 363539.665499: funcgraph_exit:         1.846 us   |                                    }
              dd-23552 [006] 363539.665499: funcgraph_entry:        0.786 us   |                                    spa_config_exit();
              dd-23552 [006] 363539.665501: funcgraph_exit:         8.573 us   |                                  }
              dd-23552 [006] 363539.665502: funcgraph_entry:        0.656 us   |                                  ddt_prefetch();
              dd-23552 [006] 363539.665503: funcgraph_entry:                   |                                  dnode_willuse_space() {
              dd-23552 [006] 363539.665504: funcgraph_entry:        0.646 us   |                                    spa_get_asize();
              dd-23552 [006] 363539.665505: funcgraph_entry:                   |                                    dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665505: funcgraph_entry:                   |                                      dsl_dir_dirty() {
              dd-23552 [006] 363539.665506: funcgraph_entry:        0.683 us   |                                        txg_list_add();
              dd-23552 [006] 363539.665507: funcgraph_exit:         1.976 us   |                                      }
              dd-23552 [006] 363539.665508: funcgraph_exit:         3.316 us   |                                    }
              dd-23552 [006] 363539.665509: funcgraph_entry:        0.660 us   |                                    dmu_tx_pool();
              dd-23552 [006] 363539.665510: funcgraph_entry:        0.603 us   |                                    dsl_pool_dirty_space();
              dd-23552 [006] 363539.665511: funcgraph_entry:        0.600 us   |                                    dmu_tx_willuse_space();
              dd-23552 [006] 363539.665513: funcgraph_exit:         9.652 us   |                                  }
              dd-23552 [006] 363539.665513: funcgraph_entry:        0.766 us   |                                  RW_WRITE_HELD();
              dd-23552 [006] 363539.665515: funcgraph_entry:                   |                                  dnode_setdirty() {
              dd-23552 [006] 363539.665516: funcgraph_entry:                   |                                    dsl_dataset_dirty() {
              dd-23552 [006] 363539.665516: funcgraph_entry:        0.856 us   |                                      txg_list_add();
              dd-23552 [006] 363539.665518: funcgraph_entry:        0.629 us   |                                      dmu_buf_add_ref();
              dd-23552 [006] 363539.665519: funcgraph_exit:         3.731 us   |                                    }
              dd-23552 [006] 363539.665520: funcgraph_exit:         5.088 us   |                                  }
              dd-23552 [006] 363539.665521: funcgraph_entry:        0.620 us   |                                  zrl_remove();
              dd-23552 [006] 363539.665522: funcgraph_exit:       + 48.729 us  |                                }
              dd-23552 [006] 363539.665523: funcgraph_entry:                   |                                dnode_setdirty() {
              dd-23552 [006] 363539.665523: funcgraph_entry:                   |                                  dsl_dataset_dirty() {
              dd-23552 [006] 363539.665524: funcgraph_entry:        0.619 us   |                                    txg_list_add();
              dd-23552 [006] 363539.665525: funcgraph_exit:         1.719 us   |                                  }
              dd-23552 [006] 363539.665526: funcgraph_exit:         2.842 us   |                                }
              dd-23552 [006] 363539.665526: funcgraph_entry:        0.682 us   |                                zrl_remove();
              dd-23552 [006] 363539.665527: funcgraph_exit:       + 92.072 us  |                              }
              dd-23552 [006] 363539.665528: funcgraph_entry:                   |                              dnode_setdirty() {
              dd-23552 [006] 363539.665529: funcgraph_entry:                   |                                dsl_dataset_dirty() {
              dd-23552 [006] 363539.665529: funcgraph_entry:        0.613 us   |                                  txg_list_add();
              dd-23552 [006] 363539.665531: funcgraph_exit:         1.853 us   |                                }
              dd-23552 [006] 363539.665531: funcgraph_exit:         3.025 us   |                              }
              dd-23552 [006] 363539.665532: funcgraph_entry:        0.547 us   |                              zrl_remove();
              dd-23552 [006] 363539.665533: funcgraph_exit:       ! 139.375 us |                            }
              dd-23552 [006] 363539.665534: funcgraph_entry:                   |                            dnode_setdirty() {
              dd-23552 [006] 363539.665534: funcgraph_entry:                   |                              dsl_dataset_dirty() {
              dd-23552 [006] 363539.665535: funcgraph_entry:        0.653 us   |                                txg_list_add();
              dd-23552 [006] 363539.665536: funcgraph_exit:         1.896 us   |                              }
              dd-23552 [006] 363539.665537: funcgraph_exit:         3.168 us   |                            }
              dd-23552 [006] 363539.665538: funcgraph_entry:        0.607 us   |                            zrl_remove();
              dd-23552 [006] 363539.665539: funcgraph_exit:       ! 205.456 us |                          }
              dd-23552 [006] 363539.665540: funcgraph_entry:                   |                          dnode_setdirty() {
              dd-23552 [006] 363539.665540: funcgraph_entry:                   |                            dsl_dataset_dirty() {
              dd-23552 [006] 363539.665541: funcgraph_entry:        0.590 us   |                              txg_list_add();
              dd-23552 [006] 363539.665542: funcgraph_exit:         1.776 us   |                            }
              dd-23552 [006] 363539.665543: funcgraph_exit:         2.983 us   |                          }
              dd-23552 [006] 363539.665543: funcgraph_entry:        0.653 us   |                          zrl_remove();
              dd-23552 [006] 363539.665545: funcgraph_exit:       ! 256.288 us |                        }
              dd-23552 [006] 363539.665545: funcgraph_entry:                   |                        dnode_setdirty() {
              dd-23552 [006] 363539.665546: funcgraph_entry:                   |                          dsl_dataset_dirty() {
              dd-23552 [006] 363539.665547: funcgraph_entry:        0.675 us   |                            txg_list_add();
              dd-23552 [006] 363539.665548: funcgraph_exit:         1.822 us   |                          }
              dd-23552 [006] 363539.665548: funcgraph_exit:         3.119 us   |                        }
              dd-23552 [006] 363539.665549: funcgraph_entry:        0.583 us   |                        zrl_remove();
              dd-23552 [006] 363539.665550: funcgraph_exit:       ! 301.786 us |                      }
              dd-23552 [006] 363539.665551: funcgraph_entry:                   |                      dnode_setdirty() {
              dd-23552 [006] 363539.665552: funcgraph_entry:                   |                        dsl_dataset_dirty() {
              dd-23552 [006] 363539.665553: funcgraph_entry:        0.626 us   |                          txg_list_add();
              dd-23552 [006] 363539.665554: funcgraph_exit:         1.889 us   |                        }
              dd-23552 [006] 363539.665554: funcgraph_exit:         3.129 us   |                      }
              dd-23552 [006] 363539.665555: funcgraph_entry:        0.625 us   |                      zrl_remove();
              dd-23552 [006] 363539.665556: funcgraph_exit:       ! 349.352 us |                    }
              dd-23552 [006] 363539.665557: funcgraph_entry:                   |                    dsl_dataset_dirty() {
              dd-23552 [006] 363539.665558: funcgraph_entry:        0.620 us   |                      txg_list_add();
              dd-23552 [006] 363539.665559: funcgraph_exit:         2.099 us   |                    }
              dd-23552 [006] 363539.665560: funcgraph_exit:       ! 359.174 us |                  }
              dd-23552 [006] 363539.665560: funcgraph_entry:        0.586 us   |                  zrl_remove();
              dd-23552 [006] 363539.665561: funcgraph_exit:       ! 412.048 us |                }
              dd-23552 [006] 363539.665562: funcgraph_exit:       ! 420.581 us |              }
              dd-23552 [006] 363539.665563: funcgraph_entry:                   |              arc_buf_alloc() {
              dd-23552 [006] 363539.665565: funcgraph_entry:                   |                hdr_cons() {
              dd-23552 [006] 363539.665566: funcgraph_entry:        0.773 us   |                  arc_space_consume();
              dd-23552 [006] 363539.665567: funcgraph_exit:         2.469 us   |                }
              dd-23552 [006] 363539.665568: funcgraph_entry:        0.670 us   |                spa_load_guid();
              dd-23552 [006] 363539.665570: funcgraph_entry:                   |                buf_cons() {
              dd-23552 [006] 363539.665570: funcgraph_entry:        0.663 us   |                  arc_space_consume();
              dd-23552 [006] 363539.665572: funcgraph_exit:         1.923 us   |                }
              dd-23552 [006] 363539.665572: funcgraph_entry:                   |                arc_get_data_buf() {
              dd-23552 [006] 363539.665573: funcgraph_entry:        4.890 us   |                  zio_data_buf_alloc();
              dd-23552 [006] 363539.665580: funcgraph_entry:        0.806 us   |                  arc_space_consume();
              dd-23552 [006] 363539.665581: funcgraph_exit:         9.010 us   |                }
              dd-23552 [006] 363539.665582: funcgraph_exit:       + 19.040 us  |              }
              dd-23552 [006] 363539.665584: funcgraph_entry:                   |              dbuf_set_data() {
              dd-23552 [006] 363539.665585: funcgraph_entry:        0.667 us   |                arc_released();
              dd-23552 [006] 363539.665586: funcgraph_exit:         2.138 us   |              }
              dd-23552 [006] 363539.665587: funcgraph_entry:                   |              arc_buf_remove_ref() {
              dd-23552 [006] 363539.665587: funcgraph_entry:                   |                arc_buf_free() {
              dd-23552 [006] 363539.665588: funcgraph_entry:        0.690 us   |                  remove_reference();
              dd-23552 [006] 363539.665589: funcgraph_entry:                   |                  arc_hdr_destroy() {
              dd-23552 [006] 363539.665590: funcgraph_entry:                   |                    arc_buf_destroy() {
              dd-23552 [006] 363539.665591: funcgraph_entry:        0.630 us   |                      arc_cksum_verify();
              dd-23552 [006] 363539.665592: funcgraph_entry:                   |                      arc_buf_data_free() {
              dd-23552 [006] 363539.665593: funcgraph_entry:        1.316 us   |                        zio_data_buf_free();
              dd-23552 [006] 363539.665595: funcgraph_exit:         2.579 us   |                      }
              dd-23552 [006] 363539.665595: funcgraph_entry:        0.633 us   |                      arc_space_return();
              dd-23552 [006] 363539.665597: funcgraph_entry:                   |                      buf_dest() {
              dd-23552 [006] 363539.665597: funcgraph_entry:        0.630 us   |                        arc_space_return();
              dd-23552 [006] 363539.665599: funcgraph_exit:         1.772 us   |                      }
              dd-23552 [006] 363539.665599: funcgraph_exit:         9.116 us   |                    }
              dd-23552 [006] 363539.665600: funcgraph_entry:                   |                    hdr_dest() {
              dd-23552 [006] 363539.665601: funcgraph_entry:        0.620 us   |                      arc_space_return();
              dd-23552 [006] 363539.665602: funcgraph_exit:         2.020 us   |                    }
              dd-23552 [006] 363539.665603: funcgraph_exit:       + 13.456 us  |                  }
              dd-23552 [006] 363539.665604: funcgraph_exit:       + 16.199 us  |                }
              dd-23552 [006] 363539.665604: funcgraph_exit:       + 17.518 us  |              }
              dd-23552 [006] 363539.665605: funcgraph_entry:                   |              dnode_willuse_space() {
              dd-23552 [006] 363539.665606: funcgraph_entry:        0.617 us   |                spa_get_asize();
              dd-23552 [006] 363539.665607: funcgraph_entry:                   |                dsl_dir_willuse_space() {
              dd-23552 [006] 363539.665608: funcgraph_entry:                   |                  dsl_dir_dirty() {
              dd-23552 [006] 363539.665608: funcgraph_entry:        0.670 us   |                    txg_list_add();
              dd-23552 [006] 363539.665610: funcgraph_exit:         1.922 us   |                  }
              dd-23552 [006] 363539.665610: funcgraph_exit:         3.356 us   |                }
              dd-23552 [006] 363539.665611: funcgraph_entry:        0.580 us   |                dmu_tx_pool();
              dd-23552 [006] 363539.665612: funcgraph_entry:        0.689 us   |                dsl_pool_dirty_space();
              dd-23552 [006] 363539.665613: funcgraph_entry:        0.723 us   |                dmu_tx_willuse_space();
              dd-23552 [006] 363539.665615: funcgraph_exit:         9.699 us   |              }
              dd-23552 [006] 363539.665615: funcgraph_entry:        0.600 us   |              zrl_remove();
              dd-23552 [006] 363539.665617: funcgraph_exit:       ! 480.968 us |            }
              dd-23552 [006] 363539.665617: funcgraph_entry:                   |            dnode_setdirty() {
              dd-23552 [006] 363539.665618: funcgraph_entry:                   |              dmu_objset_userquota_get_ids() {
              dd-23552 [006] 363539.665619: funcgraph_entry:                   |                dmu_objset_userused_enabled() {
              dd-23552 [006] 363539.665619: funcgraph_entry:        0.596 us   |                  spa_version();
              dd-23552 [006] 363539.665621: funcgraph_exit:         1.910 us   |                }
              dd-23552 [006] 363539.665621: funcgraph_exit:         3.108 us   |              }
              dd-23552 [006] 363539.665622: funcgraph_exit:         4.518 us   |            }
              dd-23552 [006] 363539.665623: funcgraph_entry:                   |            dbuf_rele() {
              dd-23552 [006] 363539.665623: funcgraph_entry:                   |              dbuf_rele_and_unlock() {
              dd-23552 [006] 363539.665624: funcgraph_entry:        0.563 us   |                arc_buf_freeze();
              dd-23552 [006] 363539.665625: funcgraph_exit:         1.926 us   |              }
              dd-23552 [006] 363539.665626: funcgraph_exit:         3.195 us   |            }
              dd-23552 [006] 363539.665626: funcgraph_entry:        0.739 us   |            RW_WRITE_HELD();
              dd-23552 [006] 363539.665628: funcgraph_entry:        0.706 us   |            spl_rw_clear_owner();
              dd-23552 [006] 363539.665629: funcgraph_exit:       ! 507.632 us |          }
              dd-23552 [006] 363539.665630: funcgraph_entry:        0.707 us   |          dnode_rele();
              dd-23552 [006] 363539.665631: funcgraph_exit:       ! 536.704 us |        }
              dd-23552 [006] 363539.665632: funcgraph_entry:        0.647 us   |        sa_get_db();
              dd-23552 [006] 363539.665633: funcgraph_entry:                   |        dmu_object_size_from_db() {
              dd-23552 [006] 363539.665634: funcgraph_entry:        0.627 us   |          zrl_add();
              dd-23552 [006] 363539.665635: funcgraph_entry:        0.583 us   |          zrl_remove();
              dd-23552 [006] 363539.665637: funcgraph_exit:         3.162 us   |        }
              dd-23552 [006] 363539.665637: funcgraph_exit:       ! 543.767 us |      }
              dd-23552 [006] 363539.665638: funcgraph_entry:        0.624 us   |      zfs_range_reduce();
              dd-23552 [006] 363539.665640: funcgraph_entry:        0.600 us   |      sa_get_db();
              dd-23552 [006] 363539.665641: funcgraph_entry:                   |      dmu_write_uio_dbuf() {
              dd-23552 [006] 363539.665641: funcgraph_entry:        0.640 us   |        zrl_add();
              dd-23552 [006] 363539.665643: funcgraph_entry:                   |        dmu_write_uio_dnode() {
              dd-23552 [006] 363539.665644: funcgraph_entry:                   |          dmu_buf_hold_array_by_dnode() {
              dd-23552 [006] 363539.665645: funcgraph_entry:                   |            zio_root() {
              dd-23552 [006] 363539.665646: funcgraph_entry:                   |              zio_null() {
              dd-23552 [006] 363539.665646: funcgraph_entry:                   |                zio_create() {
              dd-23552 [006] 363539.665647: funcgraph_entry:        0.957 us   |                  zio_cons();
              dd-23552 [006] 363539.665650: funcgraph_exit:         3.381 us   |                }
              dd-23552 [006] 363539.665650: funcgraph_exit:         4.685 us   |              }
              dd-23552 [006] 363539.665651: funcgraph_exit:         5.844 us   |            }
              dd-23552 [006] 363539.665652: funcgraph_entry:        0.563 us   |            dbuf_whichblock();
              dd-23552 [006] 363539.665653: funcgraph_entry:                   |            dbuf_hold() {
              dd-23552 [006] 363539.665654: funcgraph_entry:                   |              dbuf_hold_impl() {
              dd-23552 [006] 363539.665655: funcgraph_entry:                   |                __dbuf_hold_impl() {
              dd-23552 [006] 363539.665656: funcgraph_entry:                   |                  dbuf_find() {
              dd-23552 [006] 363539.665656: funcgraph_entry:        0.814 us   |                    dbuf_hash();
              dd-23552 [006] 363539.665658: funcgraph_exit:         2.452 us   |                  }
              dd-23552 [006] 363539.665659: funcgraph_exit:         4.142 us   |                }
              dd-23552 [006] 363539.665660: funcgraph_exit:         6.287 us   |              }
              dd-23552 [006] 363539.665660: funcgraph_exit:         7.626 us   |            }
              dd-23552 [006] 363539.665662: funcgraph_entry:                   |            zio_wait() {
              dd-23552 [006] 363539.665663: funcgraph_entry:        0.656 us   |              spa_get_dsl();
              dd-23552 [006] 363539.665664: funcgraph_entry:        0.570 us   |              spa_is_initializing();
              dd-23552 [006] 363539.665665: funcgraph_entry:                   |              zio_ready() {
              dd-23552 [006] 363539.665666: funcgraph_entry:        0.850 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665668: funcgraph_entry:        0.636 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665669: funcgraph_entry:        0.600 us   |                zio_walk_parents();
              dd-23552 [006] 363539.665670: funcgraph_exit:         5.047 us   |              }
              dd-23552 [006] 363539.665671: funcgraph_entry:        0.633 us   |              spa_get_dsl();
              dd-23552 [006] 363539.665672: funcgraph_entry:        0.653 us   |              spa_is_initializing();
              dd-23552 [006] 363539.665674: funcgraph_entry:                   |              zio_done() {
              dd-23552 [006] 363539.665675: funcgraph_entry:        0.706 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665676: funcgraph_entry:        0.567 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665677: funcgraph_entry:        0.637 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665679: funcgraph_entry:        0.687 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665680: funcgraph_entry:        0.587 us   |                zio_pop_transforms();
              dd-23552 [006] 363539.665682: funcgraph_entry:        0.616 us   |                vdev_stat_update();
              dd-23552 [006] 363539.665683: funcgraph_entry:        0.590 us   |                zio_gang_tree_free();
              dd-23552 [006] 363539.665684: funcgraph_entry:        0.600 us   |                zio_walk_parents();
              dd-23552 [006] 363539.665686: funcgraph_exit:       + 11.958 us  |              }
              dd-23552 [006] 363539.665687: funcgraph_entry:        0.783 us   |              zio_dest();
              dd-23552 [006] 363539.665688: funcgraph_exit:       + 26.557 us  |            }
              dd-23552 [006] 363539.665689: funcgraph_exit:       + 45.378 us  |          }
              dd-23552 [006] 363539.665690: funcgraph_entry:                   |          dmu_buf_will_dirty() {
              dd-23552 [006] 363539.665690: funcgraph_entry:        0.666 us   |            zrl_add();
              dd-23552 [006] 363539.665692: funcgraph_entry:        0.622 us   |            zrl_remove();
              dd-23552 [006] 363539.665693: funcgraph_entry:                   |            dbuf_read() {
              dd-23552 [006] 363539.665694: funcgraph_entry:        0.666 us   |              zrl_add();
              dd-23552 [006] 363539.665695: funcgraph_entry:        0.804 us   |              RW_WRITE_HELD();
              dd-23552 [006] 363539.665697: funcgraph_entry:        0.620 us   |              zrl_remove();
              dd-23552 [006] 363539.665698: funcgraph_exit:         5.042 us   |            }
              dd-23552 [006] 363539.665699: funcgraph_entry:                   |            dbuf_dirty() {
              dd-23552 [006] 363539.665699: funcgraph_entry:        0.527 us   |              zrl_add();
              dd-23552 [006] 363539.665701: funcgraph_entry:        0.560 us   |              zrl_remove();
              dd-23552 [006] 363539.665702: funcgraph_entry:        0.579 us   |              dbuf_unoverride();
              dd-23552 [006] 363539.665704: funcgraph_entry:        0.703 us   |              arc_buf_thaw();
              dd-23552 [006] 363539.665705: funcgraph_exit:         6.310 us   |            }
              dd-23552 [006] 363539.665706: funcgraph_exit:       + 16.025 us  |          }
              dd-23552 [006] 363539.665708: funcgraph_entry:                   |          dmu_buf_rele_array() {
              dd-23552 [006] 363539.665708: funcgraph_entry:                   |            dbuf_rele() {
              dd-23552 [006] 363539.665709: funcgraph_entry:                   |              dbuf_rele_and_unlock() {
              dd-23552 [006] 363539.665710: funcgraph_entry:        0.527 us   |                arc_buf_freeze();
              dd-23552 [006] 363539.665711: funcgraph_exit:         1.800 us   |              }
              dd-23552 [006] 363539.665711: funcgraph_exit:         3.032 us   |            }
              dd-23552 [006] 363539.665712: funcgraph_exit:         4.735 us   |          }
              dd-23552 [006] 363539.665713: funcgraph_exit:       + 70.075 us  |        }
              dd-23552 [006] 363539.665714: funcgraph_entry:        0.624 us   |        zrl_remove();
              dd-23552 [006] 363539.665715: funcgraph_exit:       + 73.824 us  |      }
              dd-23552 [006] 363539.665716: funcgraph_entry:        1.249 us   |      zfs_tstamp_update_setup();
              dd-23552 [006] 363539.665718: funcgraph_entry:                   |      sa_bulk_update() {
              dd-23552 [006] 363539.665719: funcgraph_entry:                   |        sa_bulk_update_impl() {
              dd-23552 [006] 363539.665720: funcgraph_entry:                   |          dmu_get_bonustype() {
              dd-23552 [006] 363539.665720: funcgraph_entry:        0.616 us   |            zrl_add();
              dd-23552 [006] 363539.665722: funcgraph_entry:        0.603 us   |            zrl_remove();
              dd-23552 [006] 363539.665723: funcgraph_exit:         3.272 us   |          }
              dd-23552 [006] 363539.665724: funcgraph_entry:                   |          sa_attr_op() {
              dd-23552 [006] 363539.665724: funcgraph_entry:                   |            dmu_buf_will_dirty() {
              dd-23552 [006] 363539.665725: funcgraph_entry:        0.729 us   |              zrl_add();
              dd-23552 [006] 363539.665727: funcgraph_entry:        0.586 us   |              zrl_remove();
              dd-23552 [006] 363539.665728: funcgraph_entry:                   |              dbuf_read() {
              dd-23552 [006] 363539.665729: funcgraph_entry:        0.632 us   |                zrl_add();
              dd-23552 [006] 363539.665730: funcgraph_entry:        0.680 us   |                RW_WRITE_HELD();
              dd-23552 [006] 363539.665731: funcgraph_entry:        0.560 us   |                zrl_remove();
              dd-23552 [006] 363539.665732: funcgraph_exit:         4.625 us   |              }
              dd-23552 [006] 363539.665733: funcgraph_entry:                   |              dbuf_dirty() {
              dd-23552 [006] 363539.665734: funcgraph_entry:        0.626 us   |                zrl_add();
              dd-23552 [006] 363539.665736: funcgraph_entry:        0.600 us   |                dbuf_fix_old_data();
              dd-23552 [006] 363539.665737: funcgraph_entry:        0.563 us   |                dmu_buf_add_ref();
              dd-23552 [006] 363539.665739: funcgraph_entry:                   |                dnode_setdirty() {
              dd-23552 [006] 363539.665739: funcgraph_entry:                   |                  dmu_objset_userquota_get_ids() {
              dd-23552 [006] 363539.665740: funcgraph_entry:                   |                    dmu_objset_userused_enabled() {
              dd-23552 [006] 363539.665741: funcgraph_entry:        0.533 us   |                      spa_version();
              dd-23552 [006] 363539.665742: funcgraph_exit:         1.775 us   |                    }
              dd-23552 [006] 363539.665742: funcgraph_exit:         3.108 us   |                  }
              dd-23552 [006] 363539.665743: funcgraph_exit:         4.471 us   |                }
              dd-23552 [006] 363539.665744: funcgraph_entry:        0.527 us   |                zrl_remove();
              dd-23552 [006] 363539.665745: funcgraph_exit:       + 11.711 us  |              }
              dd-23552 [006] 363539.665745: funcgraph_exit:       + 20.954 us  |            }
              dd-23552 [006] 363539.665747: funcgraph_exit:       + 23.069 us  |          }
              dd-23552 [006] 363539.665747: funcgraph_exit:       + 28.619 us  |        }
              dd-23552 [006] 363539.665748: funcgraph_exit:       + 29.968 us  |      }
              dd-23552 [006] 363539.665749: funcgraph_entry:                   |      zfs_log_write() {
              dd-23552 [006] 363539.665750: funcgraph_entry:        0.779 us   |        zil_replaying();
              dd-23552 [006] 363539.665751: funcgraph_entry:        0.669 us   |        spa_has_slogs();
              dd-23552 [006] 363539.665753: funcgraph_entry:        1.562 us   |        zil_itx_create();
              dd-23552 [006] 363539.665756: funcgraph_entry:                   |        dmu_read() {
              dd-23552 [006] 363539.665756: funcgraph_entry:                   |          dnode_hold() {
              dd-23552 [006] 363539.665757: funcgraph_entry:                   |            dnode_hold_impl() {
              dd-23552 [006] 363539.665758: funcgraph_entry:        0.556 us   |              dbuf_whichblock();
              dd-23552 [006] 363539.665759: funcgraph_entry:                   |              dbuf_hold() {
              dd-23552 [006] 363539.665760: funcgraph_entry:                   |                dbuf_hold_impl() {
              dd-23552 [006] 363539.665761: funcgraph_entry:                   |                  __dbuf_hold_impl() {
              dd-23552 [006] 363539.665762: funcgraph_entry:                   |                    dbuf_find() {
              dd-23552 [006] 363539.665763: funcgraph_entry:        0.796 us   |                      dbuf_hash();
              dd-23552 [006] 363539.665765: funcgraph_exit:         2.279 us   |                    }
              dd-23552 [006] 363539.665765: funcgraph_exit:         4.015 us   |                  }
              dd-23552 [006] 363539.665766: funcgraph_exit:         6.493 us   |                }
              dd-23552 [006] 363539.665767: funcgraph_exit:         7.829 us   |              }
              dd-23552 [006] 363539.665768: funcgraph_entry:        0.886 us   |              RW_WRITE_HELD();
              dd-23552 [006] 363539.665769: funcgraph_entry:                   |              dbuf_read() {
              dd-23552 [006] 363539.665770: funcgraph_entry:        0.559 us   |                zrl_add();
              dd-23552 [006] 363539.665771: funcgraph_entry:        1.112 us   |                dmu_zfetch();
              dd-23552 [006] 363539.665773: funcgraph_entry:        0.966 us   |                RW_WRITE_HELD();
              dd-23552 [006] 363539.665775: funcgraph_entry:        0.667 us   |                zrl_remove();
              dd-23552 [006] 363539.665776: funcgraph_exit:         6.671 us   |              }
              dd-23552 [006] 363539.665777: funcgraph_entry:        0.666 us   |              dmu_buf_get_user();
              dd-23552 [006] 363539.665778: funcgraph_entry:        0.592 us   |              zrl_add();
              dd-23552 [006] 363539.665779: funcgraph_entry:        0.693 us   |              zrl_remove();
              dd-23552 [006] 363539.665781: funcgraph_entry:                   |              dbuf_rele() {
              dd-23552 [006] 363539.665781: funcgraph_entry:        0.696 us   |                dbuf_rele_and_unlock();
              dd-23552 [006] 363539.665783: funcgraph_exit:         1.975 us   |              }
              dd-23552 [006] 363539.665783: funcgraph_exit:       + 26.191 us  |            }
              dd-23552 [006] 363539.665784: funcgraph_exit:       + 27.550 us  |          }
              dd-23552 [006] 363539.665785: funcgraph_entry:                   |          dmu_buf_hold_array_by_dnode() {
              dd-23552 [006] 363539.665786: funcgraph_entry:                   |            zio_root() {
              dd-23552 [006] 363539.665787: funcgraph_entry:                   |              zio_null() {
              dd-23552 [006] 363539.665788: funcgraph_entry:                   |                zio_create() {
              dd-23552 [006] 363539.665789: funcgraph_entry:        0.920 us   |                  zio_cons();
              dd-23552 [006] 363539.665791: funcgraph_exit:         3.368 us   |                }
              dd-23552 [006] 363539.665792: funcgraph_exit:         4.611 us   |              }
              dd-23552 [006] 363539.665792: funcgraph_exit:         5.714 us   |            }
              dd-23552 [006] 363539.665793: funcgraph_entry:        0.574 us   |            dbuf_whichblock();
              dd-23552 [006] 363539.665794: funcgraph_entry:                   |            dbuf_hold() {
              dd-23552 [006] 363539.665795: funcgraph_entry:                   |              dbuf_hold_impl() {
              dd-23552 [006] 363539.665796: funcgraph_entry:                   |                __dbuf_hold_impl() {
              dd-23552 [006] 363539.665796: funcgraph_entry:                   |                  dbuf_find() {
              dd-23552 [006] 363539.665797: funcgraph_entry:        0.706 us   |                    dbuf_hash();
              dd-23552 [006] 363539.665798: funcgraph_exit:         1.999 us   |                  }
              dd-23552 [006] 363539.665799: funcgraph_exit:         3.358 us   |                }
              dd-23552 [006] 363539.665800: funcgraph_exit:         5.170 us   |              }
              dd-23552 [006] 363539.665800: funcgraph_exit:         6.347 us   |            }
              dd-23552 [006] 363539.665801: funcgraph_entry:                   |            dbuf_read() {
              dd-23552 [006] 363539.665802: funcgraph_entry:        0.637 us   |              zrl_add();
              dd-23552 [006] 363539.665803: funcgraph_entry:        0.704 us   |              zrl_remove();
              dd-23552 [006] 363539.665804: funcgraph_exit:         3.393 us   |            }
              dd-23552 [006] 363539.665805: funcgraph_entry:                   |            zio_wait() {
              dd-23552 [006] 363539.665806: funcgraph_entry:        0.560 us   |              spa_get_dsl();
              dd-23552 [006] 363539.665807: funcgraph_entry:        0.624 us   |              spa_is_initializing();
              dd-23552 [006] 363539.665809: funcgraph_entry:                   |              zio_ready() {
              dd-23552 [006] 363539.665810: funcgraph_entry:        0.627 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665811: funcgraph_entry:        0.656 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665812: funcgraph_entry:        0.637 us   |                zio_walk_parents();
              dd-23552 [006] 363539.665813: funcgraph_exit:         4.764 us   |              }
              dd-23552 [006] 363539.665814: funcgraph_entry:        0.740 us   |              spa_get_dsl();
              dd-23552 [006] 363539.665816: funcgraph_entry:        0.583 us   |              spa_is_initializing();
              dd-23552 [006] 363539.665817: funcgraph_entry:                   |              zio_done() {
              dd-23552 [006] 363539.665818: funcgraph_entry:        0.670 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665819: funcgraph_entry:        0.765 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665820: funcgraph_entry:        0.630 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665821: funcgraph_entry:        0.640 us   |                zio_wait_for_children();
              dd-23552 [006] 363539.665823: funcgraph_entry:        0.639 us   |                zio_pop_transforms();
              dd-23552 [006] 363539.665824: funcgraph_entry:        0.687 us   |                vdev_stat_update();
              dd-23552 [006] 363539.665826: funcgraph_entry:        0.580 us   |                zio_gang_tree_free();
              dd-23552 [006] 363539.665827: funcgraph_entry:        0.582 us   |                zio_walk_parents();
              dd-23552 [006] 363539.665829: funcgraph_exit:       + 11.901 us  |              }
              dd-23552 [006] 363539.665829: funcgraph_entry:        0.719 us   |              zio_dest();
              dd-23552 [006] 363539.665831: funcgraph_exit:       + 25.482 us  |            }
              dd-23552 [006] 363539.665832: funcgraph_exit:       + 47.104 us  |          }
              dd-23552 [006] 363539.665834: funcgraph_entry:                   |          dmu_buf_rele_array() {
              dd-23552 [006] 363539.665834: funcgraph_entry:                   |            dbuf_rele() {
              dd-23552 [006] 363539.665835: funcgraph_entry:                   |              dbuf_rele_and_unlock() {
              dd-23552 [006] 363539.665836: funcgraph_entry:        0.586 us   |                arc_buf_freeze();
              dd-23552 [006] 363539.665837: funcgraph_exit:         1.916 us   |              }
              dd-23552 [006] 363539.665837: funcgraph_exit:         3.166 us   |            }
              dd-23552 [006] 363539.665838: funcgraph_exit:         4.634 us   |          }
              dd-23552 [006] 363539.665839: funcgraph_entry:        0.697 us   |          dnode_rele();
              dd-23552 [006] 363539.665840: funcgraph_exit:       + 84.595 us  |        }
              dd-23552 [006] 363539.665841: funcgraph_entry:                   |        zil_itx_assign() {
              dd-23552 [006] 363539.665842: funcgraph_entry:        0.530 us   |          spa_freeze_txg();
              dd-23552 [006] 363539.665843: funcgraph_entry:        0.580 us   |          dmu_tx_get_txg();
              dd-23552 [006] 363539.665845: funcgraph_entry:        0.636 us   |          dmu_tx_get_txg();
              dd-23552 [006] 363539.665847: funcgraph_entry:                   |          zilog_dirty() {
              dd-23552 [006] 363539.665847: funcgraph_entry:        0.662 us   |            dmu_objset_ds();
              dd-23552 [006] 363539.665849: funcgraph_entry:        0.726 us   |            txg_list_add();
              dd-23552 [006] 363539.665850: funcgraph_entry:        0.550 us   |            dmu_buf_add_ref();
              dd-23552 [006] 363539.665851: funcgraph_exit:         4.761 us   |          }
              dd-23552 [006] 363539.665852: funcgraph_exit:       + 10.788 us  |        }
              dd-23552 [006] 363539.665853: funcgraph_exit:       ! 103.915 us |      }
              dd-23552 [006] 363539.665853: funcgraph_entry:                   |      dmu_tx_commit() {
              dd-23552 [006] 363539.665855: funcgraph_entry:        0.636 us   |        dnode_rele();
              dd-23552 [006] 363539.665856: funcgraph_entry:        0.723 us   |        dnode_rele();
              dd-23552 [006] 363539.665858: funcgraph_entry:                   |        dsl_dir_tempreserve_clear() {
              dd-23552 [006] 363539.665859: funcgraph_entry:        0.797 us   |          arc_tempreserve_clear();
              dd-23552 [006] 363539.665861: funcgraph_exit:         2.975 us   |        }
              dd-23552 [006] 363539.665862: funcgraph_entry:        0.915 us   |        txg_rele_to_sync();
              dd-23552 [006] 363539.665863: funcgraph_exit:         9.955 us   |      }
              dd-23552 [006] 363539.665864: funcgraph_entry:        1.759 us   |      zfs_range_unlock();
              dd-23552 [006] 363539.665867: funcgraph_entry:                   |      zil_commit() {
              dd-23552 [006] 363539.665868: funcgraph_entry:                   |        zil_async_to_sync() {
              dd-23552 [006] 363539.665868: funcgraph_entry:        0.646 us   |          spa_freeze_txg();
              dd-23552 [006] 363539.665870: funcgraph_entry:        0.816 us   |          spa_last_synced_txg();
              dd-23552 [006] 363539.665872: funcgraph_exit:         4.251 us   |        }
              dd-23552 [006] 363539.665873: funcgraph_entry:        0.657 us   |        spa_freeze_txg();
              dd-23552 [006] 363539.665874: funcgraph_entry:        0.650 us   |        spa_last_synced_txg();
              dd-23552 [006] 363539.665876: funcgraph_entry:        0.650 us   |        spa_last_synced_txg();
              dd-23552 [006] 363539.665877: funcgraph_entry:                   |        zil_lwb_write_init() {
              dd-23552 [006] 363539.665878: funcgraph_entry:                   |          zio_root() {
              dd-23552 [006] 363539.665879: funcgraph_entry:                   |            zio_null() {
              dd-23552 [006] 363539.665879: funcgraph_entry:                   |              zio_create() {
              dd-23552 [006] 363539.665880: funcgraph_entry:        0.983 us   |                zio_cons();
              dd-23552 [006] 363539.665882: funcgraph_exit:         2.862 us   |              }
              dd-23552 [006] 363539.665883: funcgraph_exit:         4.111 us   |            }
              dd-23552 [006] 363539.665883: funcgraph_exit:         5.390 us   |          }
              dd-23552 [006] 363539.665885: funcgraph_entry:                   |          metaslab_fastwrite_mark() {
              dd-23552 [006] 363539.665885: funcgraph_entry:        0.913 us   |            spa_config_enter();
              dd-23552 [006] 363539.665887: funcgraph_entry:        0.773 us   |            vdev_lookup_top();
              dd-23552 [006] 363539.665889: funcgraph_entry:        0.922 us   |            spa_config_exit();
              dd-23552 [006] 363539.665890: funcgraph_exit:         5.731 us   |          }
              dd-23552 [006] 363539.665891: funcgraph_entry:                   |          zio_rewrite() {
              dd-23552 [006] 363539.665892: funcgraph_entry:                   |            zio_create() {
              dd-23552 [006] 363539.665893: funcgraph_entry:        1.539 us   |              zio_cons();
              dd-23552 [006] 363539.665895: funcgraph_entry:        1.203 us   |              zio_add_child();
              dd-23552 [006] 363539.665897: funcgraph_exit:         5.368 us   |            }
              dd-23552 [006] 363539.665898: funcgraph_exit:         6.650 us   |          }
              dd-23552 [006] 363539.665898: funcgraph_exit:       + 20.940 us  |        }
              dd-23552 [006] 363539.665899: funcgraph_entry:        0.610 us   |        spa_freeze_txg();
              dd-23552 [006] 363539.665901: funcgraph_entry:                   |        zil_lwb_write_start() {
              dd-23552 [006] 363539.665902: funcgraph_entry:                   |          dmu_tx_create() {
              dd-23552 [006] 363539.665902: funcgraph_entry:        1.282 us   |            dmu_tx_create_dd();
              dd-23552 [006] 363539.665904: funcgraph_entry:                   |            dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665905: funcgraph_entry:        0.632 us   |              spa_last_synced_txg();
              dd-23552 [006] 363539.665906: funcgraph_exit:         1.959 us   |            }
              dd-23552 [006] 363539.665907: funcgraph_exit:         5.325 us   |          }
              dd-23552 [006] 363539.665908: funcgraph_entry:                   |          dmu_tx_assign() {
              dd-23552 [006] 363539.665908: funcgraph_entry:        0.590 us   |            spa_suspended();
              dd-23552 [006] 363539.665909: funcgraph_entry:        0.820 us   |            dsl_pool_need_dirty_delay();
              dd-23552 [006] 363539.665911: funcgraph_entry:        0.695 us   |            txg_hold_open();
              dd-23552 [006] 363539.665912: funcgraph_entry:                   |            dsl_dataset_prev_snap_txg() {
              dd-23552 [006] 363539.665913: funcgraph_entry:        0.529 us   |              spa_last_synced_txg();
              dd-23552 [006] 363539.665914: funcgraph_exit:         1.655 us   |            }
              dd-23552 [006] 363539.665914: funcgraph_entry:        0.536 us   |            spa_get_asize();
              dd-23552 [006] 363539.665916: funcgraph_entry:        0.566 us   |            spa_get_asize();
              dd-23552 [006] 363539.665917: funcgraph_entry:        0.620 us   |            spa_get_asize();
              dd-23552 [006] 363539.665918: funcgraph_entry:        0.657 us   |            txg_rele_to_quiesce();
              dd-23552 [006] 363539.665919: funcgraph_exit:       + 11.735 us  |          }
              dd-23552 [006] 363539.665920: funcgraph_entry:        0.563 us   |          dmu_objset_ds();
              dd-23552 [006] 363539.665921: funcgraph_entry:                   |          dsl_dataset_dirty() {
              dd-23552 [006] 363539.665922: funcgraph_entry:        0.784 us   |            txg_list_add();
              dd-23552 [006] 363539.665923: funcgraph_exit:         1.975 us   |          }
              dd-23552 [006] 363539.665924: funcgraph_entry:        0.556 us   |          dmu_tx_get_txg();
              dd-23552 [006] 363539.665926: funcgraph_entry:                   |          zio_alloc_zil() {
              dd-23552 [006] 363539.665926: funcgraph_entry:        0.543 us   |            spa_log_class();
              dd-23552 [006] 363539.665928: funcgraph_entry:                   |            metaslab_alloc() {
              dd-23552 [006] 363539.665928: funcgraph_entry:        0.917 us   |              spa_config_enter();
              dd-23552 [006] 363539.665930: funcgraph_entry:        0.850 us   |              spa_config_exit();
              dd-23552 [006] 363539.665931: funcgraph_exit:         3.778 us   |            }
              dd-23552 [006] 363539.665932: funcgraph_entry:        0.596 us   |            spa_normal_class();
              dd-23552 [006] 363539.665933: funcgraph_entry:                   |            metaslab_alloc() {
              dd-23552 [006] 363539.665934: funcgraph_entry:        0.820 us   |              spa_config_enter();
              dd-23552 [006] 363539.665936: funcgraph_entry:        0.593 us   |              vdev_allocatable();
              dd-23552 [006] 363539.665938: funcgraph_entry:                   |              vdev_psize_to_asize() {
              dd-23552 [006] 363539.665939: funcgraph_entry:        0.620 us   |                vdev_default_asize();
              dd-23552 [006] 363539.665940: funcgraph_exit:         2.122 us   |              }
              dd-23552 [006] 363539.665941: funcgraph_entry:        0.677 us   |              metaslab_activate();
              dd-23552 [006] 363539.665943: funcgraph_entry:                   |              metaslab_block_alloc() {
              dd-23552 [006] 363539.665944: funcgraph_entry:                   |                metaslab_df_alloc() {
              dd-23552 [006] 363539.665944: funcgraph_entry:        0.890 us   |                  metaslab_block_maxsize();
              dd-23552 [006] 363539.665946: funcgraph_entry:        0.550 us   |                  range_tree_space();
              dd-23552 [006] 363539.665947: funcgraph_entry:                   |                  metaslab_block_picker.clone.0() {
              dd-23552 [006] 363539.665948: funcgraph_entry:        0.613 us   |                    range_tree_seg_compare();
              dd-23552 [006] 363539.665949: funcgraph_entry:        0.636 us   |                    range_tree_seg_compare();
              dd-23552 [006] 363539.665951: funcgraph_entry:        0.710 us   |                    range_tree_seg_compare();
              dd-23552 [006] 363539.665952: funcgraph_exit:         4.994 us   |                  }
              dd-23552 [006] 363539.665953: funcgraph_exit:         9.381 us   |                }
              dd-23552 [006] 363539.665954: funcgraph_entry:        0.586 us   |                range_tree_space();
              dd-23552 [006] 363539.665955: funcgraph_entry:                   |                range_tree_remove() {
              dd-23552 [006] 363539.665956: funcgraph_entry:        0.696 us   |                  range_tree_seg_compare();
              dd-23552 [006] 363539.665957: funcgraph_entry:        0.640 us   |                  range_tree_seg_compare();
              dd-23552 [006] 363539.665959: funcgraph_entry:        0.697 us   |                  range_tree_seg_compare();
              dd-23552 [006] 363539.665960: funcgraph_entry:        0.959 us   |                  metaslab_rt_remove();
              dd-23552 [006] 363539.665962: funcgraph_entry:                   |                  metaslab_rt_add() {
              dd-23552 [006] 363539.665963: funcgraph_entry:        0.703 us   |                    metaslab_rangesize_compare();
              dd-23552 [006] 363539.665964: funcgraph_entry:        0.669 us   |                    metaslab_rangesize_compare();
              dd-23552 [006] 363539.665966: funcgraph_entry:        0.820 us   |                    metaslab_rangesize_compare();
              dd-23552 [006] 363539.665967: funcgraph_exit:         5.333 us   |                  }
              dd-23552 [006] 363539.665968: funcgraph_exit:       + 13.200 us  |                }
              dd-23552 [006] 363539.665969: funcgraph_exit:       + 26.084 us  |              }
              dd-23552 [006] 363539.665970: funcgraph_entry:        0.723 us   |              range_tree_space();
              dd-23552 [006] 363539.665971: funcgraph_entry:                   |              vdev_dirty() {
              dd-23552 [006] 363539.665972: funcgraph_entry:        0.643 us   |                txg_list_add();
              dd-23552 [006] 363539.665973: funcgraph_entry:        0.804 us   |                txg_list_add();
              dd-23552 [006] 363539.665974: funcgraph_exit:         3.379 us   |              }
              dd-23552 [006] 363539.665975: funcgraph_entry:        1.773 us   |              range_tree_add();
              dd-23552 [006] 363539.665978: funcgraph_entry:        0.757 us   |              spa_config_exit();
              dd-23552 [006] 363539.665979: funcgraph_exit:       + 45.877 us  |            }
              dd-23552 [006] 363539.665980: funcgraph_entry:        0.603 us   |            spa_version();
              dd-23552 [006] 363539.665981: funcgraph_exit:       + 55.509 us  |          }
              dd-23552 [006] 363539.665982: funcgraph_entry:                   |          zil_alloc_lwb() {
              dd-23552 [006] 363539.665983: funcgraph_entry:        1.147 us   |            zio_buf_alloc();
              dd-23552 [006] 363539.665986: funcgraph_exit:         3.648 us   |          }
              dd-23552 [006] 363539.665986: funcgraph_entry:        1.425 us   |          zil_add_block();
              dd-23552 [006] 363539.665988: funcgraph_entry:        0.633 us   |          zio_shrink();
              dd-23552 [006] 363539.665990: funcgraph_entry:                   |          zio_nowait() {
              dd-23552 [006] 363539.665991: funcgraph_entry:                   |            zio_unique_parent() {
              dd-23552 [006] 363539.665992: funcgraph_entry:        0.847 us   |              zio_walk_parents();
              dd-23552 [006] 363539.665993: funcgraph_entry:        0.642 us   |              zio_walk_parents();
              dd-23552 [006] 363539.665994: funcgraph_exit:         3.238 us   |            }
              dd-23552 [006] 363539.665995: funcgraph_entry:        0.572 us   |            spa_get_dsl();
              dd-23552 [006] 363539.665996: funcgraph_entry:        0.597 us   |            spa_is_initializing();
              dd-23552 [006] 363539.665997: funcgraph_entry:                   |            zio_issue_async() {
              dd-23552 [006] 363539.665998: funcgraph_entry:                   |              zio_taskq_dispatch() {
              dd-23552 [006] 363539.665999: funcgraph_entry:        5.850 us   |                spa_taskq_dispatch_ent();
              dd-23552 [006] 363539.666005: funcgraph_exit:         7.400 us   |              }
              dd-23552 [006] 363539.666006: funcgraph_exit:         8.589 us   |            }
              dd-23552 [006] 363539.666007: funcgraph_exit:       + 16.506 us  |          }
              dd-23552 [006] 363539.666007: funcgraph_exit:       ! 106.428 us |        }
              dd-23552 [006] 363539.666008: funcgraph_entry:                   |        zio_wait() {
              dd-23552 [006] 363539.666009: funcgraph_entry:        0.719 us   |          spa_get_dsl();
              dd-23552 [006] 363539.666010: funcgraph_entry:        0.647 us   |          spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666012: funcgraph_entry:                   |  zio_execute() {
              dd-23552 [006] 363539.666012: funcgraph_entry:                   |          zio_ready() {
              dd-23552 [006] 363539.666012: funcgraph_entry:        0.597 us   |            zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666013: funcgraph_entry:        0.463 us   |    spa_get_dsl();
              dd-23552 [006] 363539.666014: funcgraph_entry:        0.753 us   |            zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666014: funcgraph_entry:        0.477 us   |    spa_is_initializing();
              dd-23552 [006] 363539.666015: funcgraph_entry:        0.580 us   |            zio_walk_parents();
      z_wr_iss/6-25302 [003] 363539.666015: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/6-25302 [003] 363539.666016: funcgraph_entry:        0.576 us   |      zio_wait_for_children();
              dd-23552 [006] 363539.666016: funcgraph_exit:         4.667 us   |          }
      z_wr_iss/6-25302 [003] 363539.666017: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
              dd-23552 [006] 363539.666017: funcgraph_entry:        0.616 us   |          spa_get_dsl();
      z_wr_iss/6-25302 [003] 363539.666017: funcgraph_exit:         2.545 us   |    }
      z_wr_iss/6-25302 [003] 363539.666018: funcgraph_entry:        0.423 us   |    spa_get_dsl();
              dd-23552 [006] 363539.666018: funcgraph_entry:        0.637 us   |          spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666019: funcgraph_entry:        0.410 us   |    spa_is_initializing();
              dd-23552 [006] 363539.666020: funcgraph_entry:                   |          zio_done() {
      z_wr_iss/6-25302 [003] 363539.666020: funcgraph_entry:                   |    zio_checksum_generate() {
              dd-23552 [006] 363539.666020: funcgraph_entry:        0.680 us   |            zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666020: funcgraph_entry:        2.856 us   |      zio_checksum_compute();
              dd-23552 [006] 363539.666022: funcgraph_entry:        0.702 us   |            zio_wait_for_children();
              dd-23552 [006] 363539.666023: funcgraph_entry:        1.116 us   |            zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666024: funcgraph_exit:         3.925 us   |    }
      z_wr_iss/6-25302 [003] 363539.666024: funcgraph_entry:        0.406 us   |    spa_get_dsl();
              dd-23552 [006] 363539.666025: funcgraph_entry:        0.764 us   |            zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666025: funcgraph_entry:        0.403 us   |    spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666026: funcgraph_entry:                   |    zio_ready() {
              dd-23552 [006] 363539.666026: funcgraph_exit:         6.496 us   |          }
      z_wr_iss/6-25302 [003] 363539.666026: funcgraph_entry:        0.443 us   |      zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666027: funcgraph_entry:        0.436 us   |      zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666028: funcgraph_entry:        0.466 us   |      zio_walk_parents();
      z_wr_iss/6-25302 [003] 363539.666029: funcgraph_entry:        0.460 us   |      zio_walk_parents();
      z_wr_iss/6-25302 [003] 363539.666030: funcgraph_exit:         4.404 us   |    }
      z_wr_iss/6-25302 [003] 363539.666031: funcgraph_entry:        0.530 us   |    spa_get_dsl();
      z_wr_iss/6-25302 [003] 363539.666032: funcgraph_entry:        2.139 us   |    zio_taskq_member();
      z_wr_iss/6-25302 [003] 363539.666034: funcgraph_entry:        0.417 us   |    spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666035: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/6-25302 [003] 363539.666036: funcgraph_entry:        0.679 us   |      spa_config_enter();
      z_wr_iss/6-25302 [003] 363539.666037: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/6-25302 [003] 363539.666038: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-25302 [003] 363539.666039: funcgraph_entry:      + 13.803 us  |          spa_get_random();
      z_wr_iss/6-25302 [003] 363539.666054: funcgraph_entry:        0.530 us   |          vdev_lookup_top();
      z_wr_iss/6-25302 [003] 363539.666055: funcgraph_exit:       + 17.138 us  |        }
      z_wr_iss/6-25302 [003] 363539.666055: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-25302 [003] 363539.666056: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-25302 [003] 363539.666057: funcgraph_entry:        0.853 us   |            zio_cons();
      z_wr_iss/6-25302 [003] 363539.666059: funcgraph_entry:        1.026 us   |            zio_add_child();
      z_wr_iss/6-25302 [003] 363539.666061: funcgraph_exit:         4.421 us   |          }
      z_wr_iss/6-25302 [003] 363539.666061: funcgraph_exit:         5.924 us   |        }
      z_wr_iss/6-25302 [003] 363539.666062: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-25302 [003] 363539.666062: funcgraph_entry:        0.449 us   |          spa_get_dsl();
      z_wr_iss/6-25302 [003] 363539.666063: funcgraph_entry:        0.437 us   |          spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666064: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-25302 [003] 363539.666065: funcgraph_entry:        0.440 us   |            spa_syncing_txg();
      z_wr_iss/6-25302 [003] 363539.666066: funcgraph_entry:        0.430 us   |            spa_writeable();
      z_wr_iss/6-25302 [003] 363539.666067: funcgraph_entry:                   |            vdev_queue_io() {
      z_wr_iss/6-25302 [003] 363539.666069: funcgraph_entry:                   |              vdev_queue_io_to_issue() {
      z_wr_iss/6-25302 [003] 363539.666069: funcgraph_entry:        0.490 us   |                vdev_queue_timestamp_compare();
      z_wr_iss/6-25302 [003] 363539.666071: funcgraph_entry:        0.832 us   |                vdev_queue_io_remove();
      z_wr_iss/6-25302 [003] 363539.666072: funcgraph_exit:         3.618 us   |              }
      z_wr_iss/6-25302 [003] 363539.666073: funcgraph_exit:         5.594 us   |            }
      z_wr_iss/6-25302 [003] 363539.666073: funcgraph_entry:        0.617 us   |            vdev_accessible();
      z_wr_iss/6-25302 [003] 363539.666074: funcgraph_entry:                   |            vdev_disk_io_start() {
      z_wr_iss/6-25302 [003] 363539.666075: funcgraph_entry:                   |              __vdev_disk_physio() {
      z_wr_iss/6-25302 [003] 363539.666084: funcgraph_entry:        0.493 us   |                vdev_disk_dio_put();
      z_wr_iss/6-25302 [003] 363539.666085: funcgraph_exit:         9.948 us   |              }
      z_wr_iss/6-25302 [003] 363539.666085: funcgraph_exit:       + 10.895 us  |            }
      z_wr_iss/6-25302 [003] 363539.666086: funcgraph_exit:       + 21.372 us  |          }
      z_wr_iss/6-25302 [003] 363539.666086: funcgraph_exit:       + 24.265 us  |        }
      z_wr_iss/6-25302 [003] 363539.666087: funcgraph_exit:       + 49.379 us  |      }
      z_wr_iss/6-25302 [003] 363539.666087: funcgraph_exit:       + 51.695 us  |    }
      z_wr_iss/6-25302 [003] 363539.666087: funcgraph_entry:        0.410 us   |    spa_get_dsl();
      z_wr_iss/6-25302 [003] 363539.666088: funcgraph_entry:        0.404 us   |    spa_is_initializing();
      z_wr_iss/6-25302 [003] 363539.666089: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/6-25302 [003] 363539.666090: funcgraph_entry:        0.467 us   |      zio_wait_for_children();
      z_wr_iss/6-25302 [003] 363539.666090: funcgraph_exit:         1.312 us   |    }
      z_wr_iss/6-25302 [003] 363539.666091: funcgraph_exit:       + 79.681 us  |  }
          <idle>-0     [010] 363539.668252: funcgraph_entry:                   |  vdev_disk_physio_completion() {
          <idle>-0     [010] 363539.668252: funcgraph_entry:                   |    vdev_disk_dio_put() {
          <idle>-0     [010] 363539.668253: funcgraph_entry:        1.612 us   |      vdev_disk_dio_free();
          <idle>-0     [010] 363539.668255: funcgraph_entry:                   |      zio_interrupt() {
          <idle>-0     [010] 363539.668256: funcgraph_entry:                   |        zio_taskq_dispatch() {
          <idle>-0     [010] 363539.668257: funcgraph_entry:        2.668 us   |          spa_taskq_dispatch_ent();
          <idle>-0     [010] 363539.668260: funcgraph_exit:         4.338 us   |        }
          <idle>-0     [010] 363539.668261: funcgraph_exit:         5.638 us   |      }
          <idle>-0     [010] 363539.668262: funcgraph_exit:         9.205 us   |    }
          <idle>-0     [010] 363539.668262: funcgraph_exit:       + 10.725 us  |  }
      z_wr_int/3-25314 [010] 363539.668274: funcgraph_entry:                   |  zio_execute() {
      z_wr_int/3-25314 [010] 363539.668275: funcgraph_entry:        0.503 us   |    spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668276: funcgraph_entry:        0.450 us   |    spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668277: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_int/3-25314 [010] 363539.668278: funcgraph_entry:        0.616 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668279: funcgraph_entry:                   |      vdev_queue_io_done() {
      z_wr_int/3-25314 [010] 363539.668280: funcgraph_entry:        0.667 us   |        vdev_queue_io_to_issue();
      z_wr_int/3-25314 [010] 363539.668281: funcgraph_exit:         2.609 us   |      }
      z_wr_int/3-25314 [010] 363539.668282: funcgraph_entry:        0.603 us   |      vdev_cache_write();
      z_wr_int/3-25314 [010] 363539.668283: funcgraph_entry:        0.406 us   |      vdev_disk_io_done();
      z_wr_int/3-25314 [010] 363539.668284: funcgraph_exit:         6.916 us   |    }
      z_wr_int/3-25314 [010] 363539.668284: funcgraph_entry:        0.463 us   |    spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668285: funcgraph_entry:        0.457 us   |    spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668286: funcgraph_entry:                   |    zio_vdev_io_assess() {
      z_wr_int/3-25314 [010] 363539.668287: funcgraph_entry:        0.446 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668288: funcgraph_exit:         1.366 us   |    }
      z_wr_int/3-25314 [010] 363539.668288: funcgraph_entry:        0.406 us   |    spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668289: funcgraph_entry:        0.404 us   |    spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668290: funcgraph_entry:                   |    zio_done() {
      z_wr_int/3-25314 [010] 363539.668290: funcgraph_entry:        0.443 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668291: funcgraph_entry:        0.453 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668292: funcgraph_entry:        0.497 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668293: funcgraph_entry:        0.433 us   |      zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668294: funcgraph_entry:        0.486 us   |      zio_pop_transforms();
      z_wr_int/3-25314 [010] 363539.668295: funcgraph_entry:        0.647 us   |      vdev_stat_update();
      z_wr_int/3-25314 [010] 363539.668296: funcgraph_entry:        0.429 us   |      zio_gang_tree_free();
      z_wr_int/3-25314 [010] 363539.668297: funcgraph_entry:        0.427 us   |      vdev_mirror_child_done();
      z_wr_int/3-25314 [010] 363539.668298: funcgraph_entry:        0.509 us   |      zio_walk_parents();
      z_wr_int/3-25314 [010] 363539.668299: funcgraph_entry:        0.406 us   |      zio_walk_parents();
      z_wr_int/3-25314 [010] 363539.668300: funcgraph_entry:        1.055 us   |      zio_remove_child();
      z_wr_int/3-25314 [010] 363539.668301: funcgraph_entry:        0.430 us   |      spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668302: funcgraph_entry:        0.413 us   |      spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668303: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_int/3-25314 [010] 363539.668304: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668305: funcgraph_entry:        0.610 us   |        vdev_mirror_io_done();
      z_wr_int/3-25314 [010] 363539.668306: funcgraph_exit:         2.392 us   |      }
      z_wr_int/3-25314 [010] 363539.668306: funcgraph_entry:        0.405 us   |      spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668307: funcgraph_entry:        0.407 us   |      spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668308: funcgraph_entry:                   |      zio_vdev_io_assess() {
      z_wr_int/3-25314 [010] 363539.668308: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668309: funcgraph_entry:        0.820 us   |        spa_config_exit();
      z_wr_int/3-25314 [010] 363539.668311: funcgraph_entry:        0.693 us   |        vdev_mirror_map_free();
      z_wr_int/3-25314 [010] 363539.668312: funcgraph_exit:         3.922 us   |      }
      z_wr_int/3-25314 [010] 363539.668312: funcgraph_entry:        0.412 us   |      spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668313: funcgraph_entry:        0.407 us   |      spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668314: funcgraph_entry:                   |      zio_done() {
      z_wr_int/3-25314 [010] 363539.668314: funcgraph_entry:        0.449 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668315: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668316: funcgraph_entry:        0.447 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668317: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668318: funcgraph_entry:        0.743 us   |        zio_pop_transforms();
      z_wr_int/3-25314 [010] 363539.668319: funcgraph_entry:        0.443 us   |        vdev_stat_update();
      z_wr_int/3-25314 [010] 363539.668320: funcgraph_entry:        0.417 us   |        zio_gang_tree_free();
      z_wr_int/3-25314 [010] 363539.668321: funcgraph_entry:                   |        metaslab_fastwrite_unmark() {
      z_wr_int/3-25314 [010] 363539.668322: funcgraph_entry:        0.756 us   |          spa_config_enter();
      z_wr_int/3-25314 [010] 363539.668323: funcgraph_entry:        0.490 us   |          vdev_lookup_top();
      z_wr_int/3-25314 [010] 363539.668324: funcgraph_entry:        0.733 us   |          spa_config_exit();
      z_wr_int/3-25314 [010] 363539.668325: funcgraph_exit:         4.141 us   |        }
      z_wr_int/3-25314 [010] 363539.668326: funcgraph_entry:                   |        zil_lwb_write_done() {
      z_wr_int/3-25314 [010] 363539.668327: funcgraph_entry:        1.210 us   |          zio_buf_free();
      z_wr_int/3-25314 [010] 363539.668329: funcgraph_entry:                   |          dmu_tx_commit() {
      z_wr_int/3-25314 [010] 363539.668330: funcgraph_entry:        1.036 us   |            txg_rele_to_sync();
      z_wr_int/3-25314 [010] 363539.668332: funcgraph_exit:         2.765 us   |          }
      z_wr_int/3-25314 [010] 363539.668332: funcgraph_exit:         6.413 us   |        }
      z_wr_int/3-25314 [010] 363539.668333: funcgraph_entry:        0.773 us   |        zio_walk_parents();
      z_wr_int/3-25314 [010] 363539.668335: funcgraph_entry:        0.699 us   |        zio_walk_parents();
      z_wr_int/3-25314 [010] 363539.668336: funcgraph_entry:        1.193 us   |        zio_remove_child();
      z_wr_int/3-25314 [010] 363539.668338: funcgraph_entry:        0.640 us   |        spa_get_dsl();
      z_wr_int/3-25314 [010] 363539.668339: funcgraph_entry:        0.609 us   |        spa_is_initializing();
      z_wr_int/3-25314 [010] 363539.668340: funcgraph_entry:                   |        zio_done() {
      z_wr_int/3-25314 [010] 363539.668341: funcgraph_entry:        0.709 us   |          zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668342: funcgraph_entry:        0.900 us   |          zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668344: funcgraph_entry:        0.704 us   |          zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668345: funcgraph_entry:        0.843 us   |          zio_wait_for_children();
      z_wr_int/3-25314 [010] 363539.668347: funcgraph_entry:        0.673 us   |          zio_pop_transforms();
      z_wr_int/3-25314 [010] 363539.668348: funcgraph_entry:        0.707 us   |          vdev_stat_update();
      z_wr_int/3-25314 [010] 363539.668349: funcgraph_entry:        0.756 us   |          zio_gang_tree_free();
      z_wr_int/3-25314 [010] 363539.668351: funcgraph_entry:        0.735 us   |          zio_walk_parents();
      z_wr_int/3-25314 [010] 363539.668355: funcgraph_exit:       + 15.130 us  |        }
      z_wr_int/3-25314 [010] 363539.668356: funcgraph_entry:        0.977 us   |        zio_dest();
      z_wr_int/3-25314 [010] 363539.668358: funcgraph_exit:       + 44.461 us  |      }
      z_wr_int/3-25314 [010] 363539.668359: funcgraph_entry:        0.919 us   |      zio_dest();
      z_wr_int/3-25314 [010] 363539.668361: funcgraph_exit:       + 70.848 us  |    }
      z_wr_int/3-25314 [010] 363539.668361: funcgraph_exit:       + 88.424 us  |  }
              dd-23552 [006] 363539.668380: funcgraph_entry:        2.482 us   |          zio_dest();
              dd-23552 [006] 363539.668384: funcgraph_exit:       + 43.457 us  |        }
              dd-23552 [006] 363539.668385: funcgraph_entry:        0.950 us   |        spa_config_enter();
              dd-23552 [006] 363539.668386: funcgraph_entry:                   |        zio_root() {
              dd-23552 [006] 363539.668387: funcgraph_entry:                   |          zio_null() {
              dd-23552 [006] 363539.668388: funcgraph_entry:                   |            zio_create() {
              dd-23552 [006] 363539.668389: funcgraph_entry:        1.163 us   |              zio_cons();
              dd-23552 [006] 363539.668391: funcgraph_exit:         3.425 us   |            }
              dd-23552 [006] 363539.668392: funcgraph_exit:         4.624 us   |          }
              dd-23552 [006] 363539.668392: funcgraph_exit:         5.838 us   |        }
              dd-23552 [006] 363539.668393: funcgraph_entry:        0.674 us   |        vdev_lookup_top();
              dd-23552 [006] 363539.668395: funcgraph_entry:                   |        zio_flush() {
              dd-23552 [006] 363539.668395: funcgraph_entry:                   |          zio_ioctl() {
              dd-23552 [006] 363539.668396: funcgraph_entry:                   |            zio_create() {
              dd-23552 [006] 363539.668397: funcgraph_entry:        0.917 us   |              zio_cons();
              dd-23552 [006] 363539.668399: funcgraph_entry:        1.294 us   |              zio_add_child();
              dd-23552 [006] 363539.668401: funcgraph_exit:         4.954 us   |            }
              dd-23552 [006] 363539.668402: funcgraph_exit:         6.433 us   |          }
              dd-23552 [006] 363539.668402: funcgraph_entry:                   |          zio_nowait() {
              dd-23552 [006] 363539.668403: funcgraph_entry:        0.544 us   |            spa_get_dsl();
              dd-23552 [006] 363539.668404: funcgraph_entry:        0.572 us   |            spa_is_initializing();
              dd-23552 [006] 363539.668406: funcgraph_entry:                   |            zio_ready() {
              dd-23552 [006] 363539.668406: funcgraph_entry:        0.666 us   |              zio_wait_for_children();
              dd-23552 [006] 363539.668408: funcgraph_entry:        0.683 us   |              zio_wait_for_children();
              dd-23552 [006] 363539.668409: funcgraph_entry:        0.600 us   |              zio_walk_parents();
              dd-23552 [006] 363539.668410: funcgraph_entry:        0.629 us   |              zio_walk_parents();
              dd-23552 [006] 363539.668412: funcgraph_exit:         6.084 us   |            }
              dd-23552 [006] 363539.668412: funcgraph_entry:        0.632 us   |            spa_get_dsl();
              dd-23552 [006] 363539.668414: funcgraph_entry:        0.547 us   |            spa_is_initializing();
              dd-23552 [006] 363539.668415: funcgraph_entry:                   |            zio_vdev_io_start() {
              dd-23552 [006] 363539.668416: funcgraph_entry:                   |              vdev_disk_io_start() {
              dd-23552 [006] 363539.668417: funcgraph_entry:        0.645 us   |                vdev_readable();
              dd-23552 [006] 363539.668435: funcgraph_exit:       + 18.621 us  |              }
              dd-23552 [006] 363539.668435: funcgraph_exit:       + 20.600 us  |            }
              dd-23552 [006] 363539.668436: funcgraph_exit:       + 33.766 us  |          }
              dd-23552 [006] 363539.668437: funcgraph_exit:       + 42.284 us  |        }
              dd-23552 [006] 363539.668438: funcgraph_entry:                   |        zio_wait() {
              dd-23552 [006] 363539.668439: funcgraph_entry:        0.543 us   |          spa_get_dsl();
              dd-23552 [006] 363539.668440: funcgraph_entry:        0.580 us   |          spa_is_initializing();
              dd-23552 [006] 363539.668441: funcgraph_entry:                   |          zio_ready() {
              dd-23552 [006] 363539.668442: funcgraph_entry:        0.786 us   |            zio_wait_for_children();
              dd-23552 [006] 363539.668443: funcgraph_entry:        0.642 us   |            zio_wait_for_children();
              dd-23552 [006] 363539.668445: funcgraph_entry:        0.627 us   |            zio_walk_parents();
              dd-23552 [006] 363539.668446: funcgraph_exit:         4.667 us   |          }
              dd-23552 [006] 363539.668446: funcgraph_entry:        0.560 us   |          spa_get_dsl();
              dd-23552 [006] 363539.668448: funcgraph_entry:        0.620 us   |          spa_is_initializing();
              dd-23552 [006] 363539.668449: funcgraph_entry:                   |          zio_done() {
              dd-23552 [006] 363539.668449: funcgraph_entry:        0.619 us   |            zio_wait_for_children();
              dd-23552 [006] 363539.668451: funcgraph_exit:         1.769 us   |          }
          <idle>-0     [010] 363539.701621: funcgraph_entry:                   |  vdev_disk_io_flush_completion() {
          <idle>-0     [010] 363539.701622: funcgraph_entry:                   |    zio_interrupt() {
          <idle>-0     [010] 363539.701623: funcgraph_entry:                   |      zio_taskq_dispatch() {
          <idle>-0     [010] 363539.701623: funcgraph_entry:        3.322 us   |        spa_taskq_dispatch_ent();
          <idle>-0     [010] 363539.701627: funcgraph_exit:         4.448 us   |      }
          <idle>-0     [010] 363539.701628: funcgraph_exit:         5.390 us   |    }
          <idle>-0     [010] 363539.701628: funcgraph_exit:         7.789 us   |  }
   z_ioctl_int/0-25368 [010] 363539.701640: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-25368 [010] 363539.701640: funcgraph_entry:        0.490 us   |    spa_get_dsl();
   z_ioctl_int/0-25368 [010] 363539.701641: funcgraph_entry:        0.503 us   |    spa_is_initializing();
   z_ioctl_int/0-25368 [010] 363539.701643: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-25368 [010] 363539.701643: funcgraph_entry:        0.590 us   |      zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701644: funcgraph_exit:         1.613 us   |    }
   z_ioctl_int/0-25368 [010] 363539.701645: funcgraph_entry:        0.413 us   |    spa_get_dsl();
   z_ioctl_int/0-25368 [010] 363539.701645: funcgraph_entry:        0.416 us   |    spa_is_initializing();
   z_ioctl_int/0-25368 [010] 363539.701646: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-25368 [010] 363539.701647: funcgraph_entry:        0.450 us   |      zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701648: funcgraph_entry:        0.456 us   |      zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701649: funcgraph_entry:        0.460 us   |      zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701650: funcgraph_entry:        0.456 us   |      zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701651: funcgraph_entry:        0.440 us   |      zio_pop_transforms();
   z_ioctl_int/0-25368 [010] 363539.701652: funcgraph_entry:        0.513 us   |      vdev_stat_update();
   z_ioctl_int/0-25368 [010] 363539.701653: funcgraph_entry:        0.417 us   |      zio_gang_tree_free();
   z_ioctl_int/0-25368 [010] 363539.701654: funcgraph_entry:        0.470 us   |      zio_walk_parents();
   z_ioctl_int/0-25368 [010] 363539.701655: funcgraph_entry:        0.420 us   |      zio_walk_parents();
   z_ioctl_int/0-25368 [010] 363539.701656: funcgraph_entry:        0.859 us   |      zio_remove_child();
   z_ioctl_int/0-25368 [010] 363539.701657: funcgraph_entry:        0.416 us   |      spa_get_dsl();
   z_ioctl_int/0-25368 [010] 363539.701658: funcgraph_entry:        0.400 us   |      spa_is_initializing();
   z_ioctl_int/0-25368 [010] 363539.701659: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-25368 [010] 363539.701659: funcgraph_entry:        0.510 us   |        zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701660: funcgraph_entry:        0.443 us   |        zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701661: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701662: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
   z_ioctl_int/0-25368 [010] 363539.701663: funcgraph_entry:        0.420 us   |        zio_pop_transforms();
   z_ioctl_int/0-25368 [010] 363539.701664: funcgraph_entry:        0.447 us   |        vdev_stat_update();
   z_ioctl_int/0-25368 [010] 363539.701665: funcgraph_entry:        0.420 us   |        zio_gang_tree_free();
   z_ioctl_int/0-25368 [010] 363539.701665: funcgraph_entry:        0.440 us   |        zio_walk_parents();
   z_ioctl_int/0-25368 [010] 363539.701668: funcgraph_exit:         9.073 us   |      }
   z_ioctl_int/0-25368 [010] 363539.701668: funcgraph_entry:        0.580 us   |      zio_dest();
   z_ioctl_int/0-25368 [010] 363539.701670: funcgraph_exit:       + 23.229 us  |    }
   z_ioctl_int/0-25368 [010] 363539.701670: funcgraph_exit:       + 30.229 us  |  }
              dd-23552 [006] 363539.701710: funcgraph_entry:        2.839 us   |          zio_dest();
              dd-23552 [006] 363539.701713: funcgraph_exit:       + 30.493 us  |        }
              dd-23552 [006] 363539.701714: funcgraph_entry:        0.727 us   |        spa_config_exit();
              dd-23552 [006] 363539.701716: funcgraph_exit:       ! 272.708 us |      }
              dd-23552 [006] 363539.701717: funcgraph_entry:                   |      zfs_inode_update() {
              dd-23552 [006] 363539.701718: funcgraph_entry:        1.059 us   |        zfsctl_is_node();
              dd-23552 [006] 363539.701719: funcgraph_entry:                   |        sa_lookup() {
              dd-23552 [006] 363539.701720: funcgraph_entry:                   |          sa_lookup_impl() {
              dd-23552 [006] 363539.701720: funcgraph_entry:        0.770 us   |            sa_attr_op();
              dd-23552 [006] 363539.701721: funcgraph_exit:         1.700 us   |          }
              dd-23552 [006] 363539.701722: funcgraph_exit:         2.735 us   |        }
              dd-23552 [006] 363539.701722: funcgraph_entry:                   |        sa_lookup() {
              dd-23552 [006] 363539.701723: funcgraph_entry:                   |          sa_lookup_impl() {
              dd-23552 [006] 363539.701723: funcgraph_entry:        0.473 us   |            sa_attr_op();
              dd-23552 [006] 363539.701724: funcgraph_exit:         1.336 us   |          }
              dd-23552 [006] 363539.701724: funcgraph_exit:         2.239 us   |        }
              dd-23552 [006] 363539.701725: funcgraph_entry:                   |        sa_lookup() {
              dd-23552 [006] 363539.701725: funcgraph_entry:                   |          sa_lookup_impl() {
              dd-23552 [006] 363539.701726: funcgraph_entry:        0.463 us   |            sa_attr_op();
              dd-23552 [006] 363539.701727: funcgraph_exit:         1.329 us   |          }
              dd-23552 [006] 363539.701727: funcgraph_exit:         2.229 us   |        }
              dd-23552 [006] 363539.701728: funcgraph_entry:        0.437 us   |        sa_get_db();
              dd-23552 [006] 363539.701729: funcgraph_entry:                   |        dmu_object_size_from_db() {
              dd-23552 [006] 363539.701729: funcgraph_entry:        0.529 us   |          zrl_add();
              dd-23552 [006] 363539.701730: funcgraph_entry:        0.427 us   |          zrl_remove();
              dd-23552 [006] 363539.701731: funcgraph_exit:         2.409 us   |        }
              dd-23552 [006] 363539.701732: funcgraph_exit:       + 14.753 us  |      }
              dd-23552 [006] 363539.701732: funcgraph_entry:        0.603 us   |      rrw_exit();
              dd-23552 [006] 363539.701733: funcgraph_exit:       ! 1205.696 us |    }
              dd-23552 [006] 363539.701734: funcgraph_exit:       ! 1207.811 us |  }
